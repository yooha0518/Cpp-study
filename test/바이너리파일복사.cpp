//#include <iostream>
//#include <fstream>
//using namespace std;
//
//int main()
//{
//	const char* srcFile = "c:\\temp\\dog.jpg";
//	const char* destFile = "c:\\temp\\dogcopy.jpg";
//
//	ifstream fsrc(srcFile, ios::in | ios::binary);// �Է¹ޱ�
//	if(!fsrc)
//	{
//		cout<<srcFile<<"���� ����"<<endl;
//		return 0;
//	}
//
//	ofstream fdest(destFile, ios::out | ios::binary);//����ϱ�
//	if (!fdest)
//	{
//		cout << destFile << "���� ����" << endl;
//		return 0;
//	}
//
//	int c;
//	
//
//	//���̳ʸ����� �����ϱ� ex12_7
//	//while ((c = fsrc.get()) != EOF)//�ҽ������� ������ �ѹ���Ʈ�� �д´�.
//	//{
//	//	fdest.put(c); //���� ����Ʈ�� ���Ͽ� ����Ѵ�.
//	//	
//	//}
//	
//	//�ؽ�Ʈ���� or ���̳ʸ� ���� �����ϱ� ex12_9
//	char buf[1024];
//	while (!fsrc.eof())
//	{
//		fsrc.read(buf, 1024);
//		int n = fsrc.gcount();
//		fdest.write(buf, n);
//
//	}
//
//
//
//	cout << srcFile << "��" << destFile << "�� ���� �Ϸ�" << endl;
//	fsrc.close();
//	fdest.close();
//
//
//}