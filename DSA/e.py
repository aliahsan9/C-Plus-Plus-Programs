import smtplib
from email.mime.multipart import MIMEMultipart
from email.mime.text import MIMEText
import schedule
import time
import os

# Email credentials and settings
EMAIL_ADDRESS = os.getenv('EMAIL_USER')  # Your email address
EMAIL_PASSWORD = os.getenv('EMAIL_PASS')  # Your email password
TO_EMAIL = 'recipient@example.com'  # Recipient email address

def send_email():
    # Create the email content
    subject = "Daily Report"
    body = """
    <h1>Daily Report</h1>
    <p>This is your daily report. Please find the details below:</p>
    <ul>
        <li>Detail 1</li>
        <li>Detail 2</li>
        <li>Detail 3</li>
    </ul>
    """

    # Create message container
    msg = MIMEMultipart()
    msg['From'] = EMAIL_ADDRESS
    msg['To'] = TO_EMAIL
    msg['Subject'] = subject

    # Attach body to the email
    msg.attach(MIMEText(body, 'html'))

    try:
        # Set up the server
        server = smtplib.SMTP('smtp.gmail.com', 587)
        server.starttls()
        server.login(EMAIL_ADDRESS, EMAIL_PASSWORD)

        # Send the email
        server.sendmail(EMAIL_ADDRESS, TO_EMAIL, msg.as_string())
        print("Email sent successfully")

        # Close the server connection
        server.quit()
    except Exception as e:
        print(f"Failed to send email: {e}")

# Schedule the job every day at a specific time
schedule.every().day.at("09:00").do(send_email)

print("Scheduler started...")
# Keep the script running
while True:
    schedule.run_pending()
    time.sleep(1)
