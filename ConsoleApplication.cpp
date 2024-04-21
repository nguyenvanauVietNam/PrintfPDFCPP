#include <iostream>
#include <fstream>

int main() {
    // Tạo một tệp PDF mới
    std::ofstream pdfFile("output.pdf", std::ios::binary);
    if (!pdfFile) {
        std::cerr << "Không thể tạo tệp PDF." << std::endl;
        return 1;
    }

    // Viết mã PDF đơn giản
    pdfFile << "%PDF-1.4\n";
    pdfFile << "1 0 obj\n";
    pdfFile << "<< /Type /Catalog /Pages 2 0 R >>\n";
    pdfFile << "endobj\n";
    pdfFile << "2 0 obj\n";
    pdfFile << "<< /Type /Pages /Kids [3 0 R] /Count 1 >>\n";
    pdfFile << "endobj\n";
    pdfFile << "3 0 obj\n";
    pdfFile << "<< /Type /Page /Parent 2 0 R /MediaBox [0 0 612 792] /Contents 4 0 R >>\n";
    pdfFile << "endobj\n";
    pdfFile << "4 0 obj\n";
    pdfFile << "<< /Length 50 >>\n";
    pdfFile << "stream\n";
    pdfFile << "BT\n";
    pdfFile << "/F1 24 Tf\n";
    pdfFile << "100 700 Td\n";
    pdfFile << "(Hello, PDF!) Tj\n";
    pdfFile << "ET\n";
    pdfFile << "endstream\n";
    pdfFile << "endobj\n";
    pdfFile << "xref\n";
    pdfFile << "0 5\n";
    pdfFile << "0000000000 65535 f \n";
    pdfFile << "0000000010 00000 n \n";
    pdfFile << "0000000060 00000 n \n";
    pdfFile << "0000000115 00000 n \n";
    pdfFile << "0000000210 00000 n \n";
    pdfFile << "trailer\n";
    pdfFile << "<< /Size 5 /Root 1 0 R >>\n";
    pdfFile << "startxref\n";
    pdfFile << "228\n";
    pdfFile << "%%EOF\n";

    std::cout << "Tạo tệp PDF thành công!" << std::endl;
    return 0;
}
