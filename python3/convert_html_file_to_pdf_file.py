from xhtml2pdf import pisa             

def convert_html_to_pdf(html_content, output_file):
	"""
	This method converts the given html content to pdf file
	@param: html_content --> Eg: <html><body>Hi!! There</body></html>
	@param: output_file --> Eg: filename.pdf
	@returns: 0 --> Success 
			  1 --> Error
	"""

    result_file = open(output_file, "w+b")

    # convert HTML to PDF
    pisa_status = pisa.CreatePDF(html_content, dest=result_file)       

    result_file.close()         

    return pisa_status.err


if __name__ == "__main__":
    html_content=input("Enter html content:")
    output_file=input("Enter pdf file name:")
    if not convert_html_to_pdf(html_content, output_file):
    	print("Successfully converted")
    else:
    	print("Error in converting the file")
