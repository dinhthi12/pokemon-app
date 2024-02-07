#include <iostream>
#include <string>
// Viết chương trình nhập họ tên, điểm toán, điểm văn của 1 học sinh. Tính điểm trung bình và xuất ra kết quả
std::string fullname;
float math;
float literature;
float scoreMedium;

void import()
{
  std::cout << "\nNhap ho ten: ";
  std::getline(std::cin, fullname);

  do
  {
    std::cout << "\nNhap diem toan: ";
    std::cin >> math;
    if (math < 0 || math > 10)
    {
      std::cout << "Diem toan phai nam trong khoang tu 0 den 10. Vui long nhap lai.\n";
    }
  } while (math < 0 || math > 10);

  do
  {
    std::cout << "\nNhap diem van: ";
    std::cin >> literature;
    if (literature < 0 || literature > 10)
    {
      std::cout << "Diem van phai nam trong khoang tu 0 den 10. Vui long nhap lai.\n";
    }
  } while (literature < 0 || literature > 10);

  std::cin.ignore();
}

void score()
{
  scoreMedium = (math + literature) / 2;
}

void display()
{
  std::cout << "\nHo ten: " << fullname;
  std::cout << "\nToan: " << math;
  std::cout << "\nVan: " << literature;
  std::cout << "\nDiem Trung Binh: " << scoreMedium;
}
int main()
{
  import();
  score();
  display();

  return 0;
}
