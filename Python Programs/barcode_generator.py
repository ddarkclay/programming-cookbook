import barcode
# from barcode import generate
# from barcode.writer import ImageWriter
print(barcode.PROVIDED_BARCODES)
EAN = barcode.get_barcode_class('ean')
print(EAN)
ean = EAN('59012341234567')
print(type(ean))
fullname = ean.save('ean_barcode')
print(fullname)


# Create all barcode
# for i in barcode.PROVIDED_BARCODES:
#     code_class = barcode.get_barcode_class(i)
#     print(code_class)
#     code = code_class('59012341234567')
#     print(code)
#     name = code.save(i)
#     print(name)
