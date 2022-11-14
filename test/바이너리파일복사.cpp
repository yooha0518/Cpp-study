//#include <iostream>
//#include <fstream>
//using namespace std;
//
//int main()
//{
//	const char* srcFile = "c:\\temp\\dog.jpg";
//	const char* destFile = "c:\\temp\\dogcopy.jpg";
//
//	ifstream fsrc(srcFile, ios::in | ios::binary);// 입력받기
//	if(!fsrc)
//	{
//		cout<<srcFile<<"열기 오류"<<endl;
//		return 0;
//	}
//
//	ofstream fdest(destFile, ios::out | ios::binary);//출력하기
//	if (!fdest)
//	{
//		cout << destFile << "열기 오류" << endl;
//		return 0;
//	}
//
//	int c;
//	
//
//	//바이너리파일 복사하기 ex12_7
//	//while ((c = fsrc.get()) != EOF)//소스파일을 끝까지 한바이트씩 읽는다.
//	//{
//	//	fdest.put(c); //읽은 바이트를 파일에 출력한다.
//	//	
//	//}
//	
//	//텍스트파일 or 바이너리 파일 복사하기 ex12_9
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
//	cout << srcFile << "을" << destFile << "로 복사 완료" << endl;
//	fsrc.close();
//	fdest.close();
//
//
//}