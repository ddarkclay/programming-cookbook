import pyqrcode
from pyqrcode import QRCode

s = "https://www.geeksforgeeks.org/python-generate-qr-code-using-pyqrcode-module/"
url = pyqrcode.create(s)
url.svg('mylinkqr.svg', scale=8)