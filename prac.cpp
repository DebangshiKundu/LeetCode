#include <iostream>
using namespace std;
// class employee{
//     public:
//     int no,basic,da,it,net,gross;
//     string name;
//     public:
//     void getdata(){
//         cout<<"Enter the details of an Employee"<<endl<<"\n";
//         cout<<"Employee No.: ";cin>>no;
//         fflush(stdin);
//         cout<<"Name: ";
//         getline(cin,name);
//         cout<<"Basic Salary: Rs.";
//         cin>>basic;
//     }
//     int gross_sal()
//     {
//         da=12*basic/100;
//         gross=basic+da;
//         return gross;
//     }
//     int net_sal()
//     {
//         it=18*gross/100;
//         net=gross-it;
//         return net;
//     }
// };

// int main()
// {
//     int n;
//     cout<<"Enter the number of employees: ";
//     cin>>n;
//     employee emp[n];
//     for (int i = 0;i < n;i++)
//     {
//         emp[i].getdata();
//     }
//     cout<<"\nThe employee details are:\n";
//     for(int i=0;i<n;i++)
//     {
//         cout<<"\n\nEmployee number: "<<emp[i].no;
//         cout<<"\nEmployee name: "<<emp[i].name;
//         cout<<"\nGross salary is :Rs."<<emp[i].gross_sal();
//         cout<<"\nNet salary is :Rs. "<<emp[i].net_sal();
//     }
// }

// class flight{
//     int no;
//     string dest;
//     float dist,fuel;
//     float calc_fuel(float dist,float fuel){
//         if(dist<=1000)
//             fuel=500;
//         else if(dist>1000 and dist<=2000)
//             fuel=1100;
//         else
//             fuel=2200;
//         return fuel;
//     }
//     public:
//     flight(){
//         fuel=13.2;
//     }
//     void info_entry();
//     void display_info();
// };

// void flight::info_entry()
// {
//     cout<<"Enter the flight number: ";
//     cin>>no;
//     fflush(stdin);
//     cout<<"Enter the destination: ";
//     getline(cin,dest);
//     cout<<"Enter the distance: ";
//     cin>>dist;
//     fuel=calc_fuel(dist,fuel);
// }

// void flight::display_info()
// {
//     cout<<"\nThe flight details are: \n";
//     cout<<"Flight number: "<<no;
//     cout<<"\nDestination: "<<dest;
//     cout<<"\nDistance: "<<dist;
//     cout<<"\nFuel required: "<<fuel;
// }

// int main()
// {
//     flight a;
//     a.info_entry();
//     a.display_info();
// }

// int main()
// {
//     int n, i, j, k=0;
//     cout << "Enter the dimension of the matrix: ";
//     cin >> n;
//     int arr[n][n],a[(n*(n+1))/2];
//     cout << "Enter the elements: \n";
//     for (i = 0; i < n; i++)
//     {
//         for (j = 0; j < n; j++)
//         {
//             if (i <= j)
//                 cin >> arr[i][j];
//             else
//                 arr[i][j] = 0;
//         }
//     }
//     cout<<"The 2D array is:\n";
//     for(i=0;i<n;i++)
//     {
//         for(j=0;j<n;j++)
//         cout<<arr[i][j]<<"\t";
//         cout<<endl;
//     }

//     for (i = 0; i<n ; ++i){
//         for (j = 0; j <n; ++j){
//             if(arr[i][j]!=0)
//             a[k++]=arr[i][j];
//         }
//     }
//     cout<<"\nThe mapped 1D array is: \n";
//     for(i=0;i<k;i++)
//     cout<<a[i]<<"\t";

//     cout<<"\n\nEnter the position of element (r,c): ";
//     int r,c;
//     cin>>r>>c;
//     int z=((n*r)+c-(r*(r+1)/2));
//     cout<<"The element is: "<<a[z];
// }

// int main()
// {
//     int n, i, j, k=0;
//     cout << "Enter the dimension of the matrix: ";
//     cin >> n;
//     int arr[n][n],a[(n*(n+1))/2];
//     cout << "Enter the elements: \n";
//     for (i = 0; i < n; i++)
//     {
//         for (j = 0; j < n; j++)
//         {
//             if (i >= j)
//                 cin >> arr[i][j];
//             else
//                 arr[i][j] = 0;
//         }
//     }
//     cout<<"The 2D array is:\n";
//     for(i=0;i<n;i++)
//     {
//         for(j=0;j<n;j++)
//         cout<<arr[i][j]<<"\t";
//         cout<<endl;
//     }

//     for (i = 0; i<n ; ++i){
//         for (j = 0; j <n; ++j){
//             if(arr[i][j]!=0)
//             a[k++]=arr[i][j];
//         }
//     }
//     cout<<"\nThe mapped 1D array is: \n";
//     for(i=0;i<k;i++)
//     cout<<a[i]<<"\t";

//     cout<<"\n\nEnter the position of element (r,c): ";
//     int r,c;
//     cin>>r>>c;
//     int z=((r*(r+1)/2)+c);
//     cout<<"The element is: "<<a[z];
// }

// int main()
// {
//     int n, i, j, k=0;
//     cout << "Enter the dimension of the matrix: ";
//     cin >> n;
//     int arr[n][n],a[n];
//     cout << "Enter the elements: \n";
//     for (i = 0; i < n; i++)
//     {
//         for (j = 0; j < n; j++)
//         {
//             if (i == j)
//                 cin >> arr[i][j];
//             else
//                 arr[i][j] = 0;
//         }
//     }
//     cout<<"The 2D array is:\n";
//     for(i=0;i<n;i++)
//     {
//         for(j=0;j<n;j++)
//         cout<<arr[i][j]<<"\t";
//         cout<<endl;
//     }

//     for (i = 0; i<n ; ++i){
//         for (j = 0; j <n; ++j){
//             if(arr[i][j]!=0)
//             a[k++]=arr[i][j];
//         }
//     }
//     cout<<"\nThe mapped 1D array is: \n";
//     for(i=0;i<k;i++)
//     cout<<a[i]<<"\t";

//     cout<<"\n\nEnter the position of element (r,c): ";
//     int r,c;
//     cin>>r>>c;
//     int z=r;
//     cout<<"The element is: "<<a[z]<<endl;
// }

// int main()
// {
//     int n, i, j, k=0;
//     cout << "Enter the dimension of the matrix: ";
//     cin >> n;
//     int arr[n][n],a[n+2*(n-1)];
//     cout << "Enter the elements: \n";
//     for (i = 0; i < n; i++)
//     {
//         for (j = 0; j < n; j++)
//         {
//             if (i == j or i==j-1 or j==i-1)
//                 cin >> arr[i][j];
//             else
//                 arr[i][j] = 0;
//         }
//     }
//     cout<<"The 2D array is:\n";
//     for(i=0;i<n;i++)
//     {
//         for(j=0;j<n;j++)
//         cout<<arr[i][j]<<"\t";
//         cout<<endl;
//     }

//     for (i = 0; i<n ; ++i){
//         for (j = 0; j <n; ++j){
//             if(arr[i][j]!=0)
//             a[k++]=arr[i][j];
//         }
//     }
//     cout<<"\nThe mapped 1D array is: \n";
//     for(i=0;i<k;i++)
//     cout<<a[i]<<"\t";

//     cout<<"\n\nEnter the position of element (r,c): ";
//     int r,c;
//     cin>>r>>c;
//     int z=2*r+c;
//     cout<<"The element is: "<<a[z]<<endl;
// }

// int main()
// {
//     int n, m, i, j, k=0;
//     cout << "Enter the dimension of the matrix: ";
//     cin >> m>>n;
//     int arr[m][n],a[n*m];
//     cout << "Enter the elements: \n";
//     for (i = 0; i < m; i++)
//     {
//         for (j = 0; j < n; j++)
//         {
//                 cin >> arr[i][j];
//         }
//     }
//     cout<<"The 2D array is:\n";
//     for(i=0;i<m;i++)
//     {
//         for(j=0;j<n;j++)
//         cout<<arr[i][j]<<"\t";
//         cout<<endl;
//     }

//     for (i = 0; i<m ; ++i){
//         for (j = 0; j <n; ++j){
//             a[k++]=arr[i][j];
//         }
//     }
//     cout<<"\nThe mapped 1D array is: \n";
//     for(i=0;i<k;i++)
//     cout<<a[i]<<"\t";

//     cout<<"\n\nEnter the position of element (r,c): ";
//     int r,c;
//     cin>>r>>c;
//     int z=r*n+c;
//     cout<<"The element is: "<<a[z]<<endl;
// }

// int main()
// {
//     int n, m, i, j, k=0;
//     cout << "Enter the dimension of the matrix: ";
//     cin >> m>>n;
//     int arr[m][n],a[n*m];
//     cout << "Enter the elements: \n";
//     for (i = 0; i < m; i++)
//     {
//         for (j = 0; j < n; j++)
//         {
//                 cin >> arr[i][j];
//         }
//     }
//     cout<<"The 2D array is:\n";
//     for(i=0;i<m;i++)
//     {
//         for(j=0;j<n;j++)
//         cout<<arr[i][j]<<"\t";
//         cout<<endl;
//     }

//     for (i = 0; i<n ; ++i){
//         for (j = 0; j <m; ++j){
//             a[k++]=arr[j][i];
//         }
//     }
//     cout<<"\nThe mapped 1D array is: \n";
//     for(i=0;i<k;i++)
//     cout<<a[i]<<"\t";

//     cout<<"\n\nEnter the position of element (r,c): ";
//     int r,c;
//     cin>>r>>c;
//     int z=c*m+r;
//     cout<<"The element is: "<<a[z]<<endl;
// }

// struct sparse{
//     int r,c,v;
// };

// int main()
// {
//     int n, i, j, c=0, m,k=0;
//     cout << "Enter the dimension of the matrix: ";
//     cin >>m>> n;
//     int arr[m][n];
//     cout << "Enter the elements: \n";
//     for (i = 0; i < m; i++)
//     {
//         for (j = 0; j < n; j++)
//         {
//                 cin >> arr[i][j];
//                 if(arr[i][j]!=0)
//                 c++;
//         }
//     }
//     cout<<"The 2D array is:\n";
//     for(i=0;i<m;i++)
//     {
//         for(j=0;j<n;j++)
//         cout<<arr[i][j]<<"\t";
//         cout<<endl;
//     }
//     struct sparse s[c];
//     for(i=0;i<m;i++){
//         for(j=0;j<n;++j){
//             if(arr[i][j]!=0){
//                 s[k].r=i;
//                 s[k].c=j;
//                 s[k++].v=arr[i][j];
//             }
//         }
//     }
//     cout<<"\nThe mapped Sparse Matrix in 1D array of triplets is :"<<endl;
//     cout<<"row\tcolumn\tvalue\n";
//     for(i=0;i<c;i++)
//     cout<<s[i].r<<"\t"<<s[i].c<<"\t"<<s[i].v<<endl;

//     cout<<"The reconstucted matrix is: \n";
//     int res[c][3];
//     for(i=0;i<c;i++){
//         res[i][0]=s[i].r;
//         res[i][1]=s[i].c;
//         res[i][2]=s[i].v;
//     }

//     for(i=0;i<c;i++)
//     {
//         for(j=0;j<3;j++)
//         cout<<res[i][j]<<'\t';
//         cout<<endl;
//     }

// }

/*










*/
// class time
// {
//     int hr, min, sec;

// public:
//     time()
//     {
//         hr = min = sec = 0;
//     }
//     class time add(class time, class time);
//     class time diff(class time, class time);
//     void read();
//     void display();
// };

// void time::read()
// {
//     cout << "Enter the hour:";
//     cin >> hr;
//     cout << "Enter minute:";
//     cin >> min;
//     cout << "Enter second:";
//     cin >> sec;
// }
// void time::display()
// {
//     cout << "\nhour: " << hr;
//     cout << "\nmin: " << min;
//     cout << "\nsec: " << sec;
// }

// class time time::add(class time a, class time b)
// {
//     time temp;
//     temp.sec = (a.sec + b.sec);
//     int q = temp.sec / 60;
//     temp.sec %= 60;
//     temp.min = (a.min + b.min) + q;
//     q = temp.min / 60;
//     temp.min %= 60;
//     temp.hr = (a.hr + b.hr) + q;
//     return temp;
// }

// class time time::diff(class time a, class time b)
// {
//     time temp;
//     temp.hr = a.hr - b.hr;
//     if ((a.min - b.min) < 0)
//     {
//         temp.hr -= 1;
//         temp.min = a.min - b.min + 60;
//     }
//     else
//         temp.min = (a.min - b.min);
//     if ((a.sec - b.sec) < 0)
//     {
//         temp.min -= 1;
//         temp.sec = a.sec - b.sec + 60;
//     }
//     else
//         temp.sec = (a.sec - b.sec);

//     return temp;
// }
// int main()
// {
//     class time a, b, c, d;
//     cout << "Enter details for Time 1:" << endl;
//     a.read();
//     cout << "Enter details for Time 2:" << endl;
//     b.read();
//     c = c.add(a, b);
//     d = d.diff(a, b);
//     cout << "\n\nThe sum of Time 1 and Time 2:" << endl;
//     c.display();
//     cout << "\n\nThe differnce between Time 1 and Time 2:" << endl;
//     d.display();
//     cout << endl;
// }
/*











*/

// struct poly
// {
//     int base, power;
// };
// void add(struct poly p1[], struct poly p2[], struct poly p3[])
// {
//     int n1 = p1[0].base;
//     int n2 = p2[0].base, n3 = 1, m = 1, n = 1;
//     while (m <= n1 and n <= n2)
//     {
//         if (p1[m].power < p2[n].power)
//         {
//             p3[n3].base = p1[m].base;
//             p3[n3++].power = p1[m++].power;
//         }
//         else if (p1[m].power > p2[n].power)
//         {
//             p3[n3].base = p2[n].base;
//             p3[n3++].power = p2[n++].power;
//         }
//         else
//         {
//             if (p1[m].base + p2[n].base != 0)
//             {
//                 p3[n3].base = p1[m].base + p2[n].base;
//                 p3[n3].power = p1[m].power;
//             }
//             m++, n++,n3++;
//         }
//     }
//     while(m<=n1){
//             p3[n3].base=p1[m].base;
//             p3[n3++].power=p1[m++].power;
//         }
//         while(n<=n2){
//             p3[n3].base=p2[n].base;
//             p3[n3++].power=p2[n++].power;
//         }
//         p3[0].base=n3-1;
// }
// void read(struct poly p[])
// {
//     int n, i;
//     cout << "Enter the no of terms: ";
//     cin >> n;
//     cout << "enter the polynomial as (base,power) : \n";
//     for (i = 1; i <= n; i++)
//     {
//         cin >> p[i].base;
//         cin >> p[i].power;
//     }
//     p[0].base = n;
// }
// void display(struct poly p[])
// {
//     cout << "\nBASE\tPOWER\n"<<p[0].base<<endl;
//     for (int i = 1; i <= p[0].base; i++)
//         cout << p[i].base << "\t" << p[i].power<<endl;
// }
// int main()
// {
//     struct poly p1[10], p2[10], p3[20];
//     read(p1);
//     read(p2);
//     cout << "\nThe first poly is:";
//     display(p1);
//     cout << "\nThe second poly is:";
//     display(p2);
//     add(p1, p2, p3);
//     cout<<"\nThe sum is: ";
//     display(p3);
// }

/*









*/

// int main()
// {
//     cout<<"Enter the string: ";
//     char s[100];
//     cin.getline(s,100);
//     int l=0,i=0;
//     while(s[i]!='\0')
//     {
//         i++;
//     }
//     cout<<"The length of the string is : "<<i<<endl;

// }

// int main(){
//     char s1[100],s2[100];
//     cout <<"enter first string: \n";
//     cin.getline(s1,100);
//     cout<<"enter second string:\n ";
//     cin.getline(s2,100);
//     int i=0,j=0;
//     while(s1[i]!='\0')
//     i++;
//     while(s2[j]!='\0')
//     {
//         s1[i++]=s2[j++];
//     }
//     cout<<"The concatenated string is: \n"<<s1<<endl;
// }

// int main()
// {
//     char s1[100], s2[100];
//     cout << "enter first string: \n";
//     cin.getline(s1, 100);
//     cout << "enter second string:\n";
//     cin.getline(s2, 100);
//     int i = 0, j = 0;
//     while (s1[i] != '\0')
//         i++;
//     while (s2[j] != '\0')
//         j++;
//     if (i == j)
//     {
//         i=0,j=0;
//         while (s1[i] != '\0' or s2[j] != '\0')
//         {
//             if (s1[i] != s2[j])
//             {
//                 cout << "The strings are not equal.";
//                 cout << "\nThe differnce is: " << s1[i] - s2[j];
//                 return 0;
//             }
//             i++, j++;
//         }
//         cout << "Equal strings" << endl;
//     }
//     else
//         cout << "The strings are not equal";
// }

// int main()
// {
//     char s[100],sub[100],res[200];
//     int n,i=0,j=0,k=0;
//     cout<<"Enter the String : "<<"\n";
//     cin.getline(s,100);
//     cout<<"Enter the substring: \n";
//     cin.getline(sub,100);
//     fflush(stdin);
//     cout<<"Enter the position of insertion: ";
//     cin>>n;
//     n--;
//     for(i=0;i<n;i++)
//     {
//         res[k++]=s[i];
//     }
//     while(sub[j]!='\0'){
//         res[k++]=sub[j++];
//     }
//     while(s[i]!='\0')
//     {
//         res[k++]=s[i++];
//     }
//     res[k]='\0';
//     int x=0;
//     cout<<"The resultant string is: \n";
//     while(res[x]!='\0')
//     cout<<res[x++];
//     // for(i=n-1;s[i]!='\0';i++)
//     // {
//     //     res[k++]=s[i];
//     // }
//     // res[k]='\0';
//     // for(i=n-1;sub[j]!='\0';i++,j++)
//     // {
//     //     s[i]=sub[j];
//     // }
//     // k=0;
//     // while(res[k]!='\0')
//     // {
//     //     s[i++]=res[k++];
//     // }
//     // s[i]='\0';
//     // int x=0;
//     // cout<<"The resultant string is: \n";
//     // while(s[x]!='\0')
//     // cout<<s[x++];
// }

// int main()
// {
//     char s[100], sub[100], res[200];
//     int n, i = 0, j = 0, k = 0, flag = 0, c = 0;
//     cout << "Enter the String : "
//          << "\n";
//     cin.getline(s, 100);
//     cout << "Enter the substring: \n";
//     cin.getline(sub, 100);
//     for (i = 0; s[i] != '\0'; i++)
//     {
//         c = i;
//         while (s[i] == sub[j])
//         {
//             i++;
//             j++;
//             if (j == strlen(sub))
//                 {flag = 1;
//                 break;}
//         }
//         j=0;
//         if (flag == 0)
//             i = c;
//         else
//             flag=0;
//         res[k++]=s[i];
//     }
//     res[k]='\0';
//     cout<<"The deleted string is: "<<res;
// }
/*






*/

// #include<iostream>
// using namespace std;

// class SparseElement {
// public:
//     int row, col, value;
// };

// class SparseMatrix {
// private:
//     SparseElement* elements;
//     int numRows, numCols, numElements;

// public:
//     SparseMatrix(int rows, int cols, int elementsCount) {
//         numRows = rows;
//         numCols = cols;
//         numElements = elementsCount;
//         elements = new SparseElement[elementsCount];
//     }

//     void readMatrix() {
//         cout << "Enter " << numElements << " non-zero elements (row, column, value):" << endl;
//         for (int i = 0; i < numElements; i++) {
//             cin >> elements[i].row >> elements[i].col >> elements[i].value;
//         }
//     }

//     void displayMatrix() {
//         cout << "Row\tColumn\tValue" << endl;
//         for (int i = 0; i < numElements; i++) {
//             cout << elements[i].row << "\t" << elements[i].col << "\t" << elements[i].value << endl;
//         }
//     }

//     void transpose() {
//         SparseElement* transposed = new SparseElement[numElements];

//         // Initialize counts for each column
//         int* count = new int[numCols + 1]();
//         for (int i = 0; i < numElements; i++) {
//             count[elements[i].col]++;
//         }

//         // Calculate starting index for each column
//         int* index = new int[numCols + 1];
//         index[0] = 0;
//         for (int i = 1; i <= numCols; i++) {
//             index[i] = index[i - 1] + count[i - 1];
//         }

//         // Populate transposed matrix
//         for (int i = 0; i < numElements; i++) {
//             int pos = index[elements[i].col]++;
//             transposed[pos].row = elements[i].col;
//             transposed[pos].col = elements[i].row;
//             transposed[pos].value = elements[i].value;
//         }

//         // Copy transposed matrix back to original
//         for (int i = 0; i < numElements; i++) {
//             elements[i] = transposed[i];
//         }

//         delete[] transposed;
//         delete[] count;
//         delete[] index;
//     }

//     ~SparseMatrix() {
//         delete[] elements;
//     }
// };

// int main() {
//     int rows, cols, elementsCount;

//     cout << "Enter number of rows, columns, and non-zero elements: ";
//     cin >> rows >> cols >> elementsCount;

//     SparseMatrix matrix(rows, cols, elementsCount);

//     matrix.readMatrix();

//     cout << "Original Matrix:" << endl;
//     matrix.displayMatrix();

//     matrix.transpose();

//     cout << "\nTransposed Matrix:" << endl;
//     matrix.displayMatrix();

//     return 0;
// }
// /*







// */

// class sparse
// {
//     public:
//     int row, col, val;
// };
// int main()
// {
//     int row, col, i, j,c=0;
//     cout << "Enter the dimensions of the matrix (row,col): ";
//     cin >> row >> col;
//     int arr[row][col];
//     cout << "Enter the elements: \n";
//     for (i = 0; i < row; i++)
//     {
//         for (j = 0; j < col; j++)
//             {cin >> arr[i][j];
//             if(arr[i][j]!=0)
//                 c++;
//             }
//     }
//     int k=c;
//     cout << "\nThe original matrix as 2D array is: \n";
//     for (i = 0; i < row; ++i)
//     {
//         for (j = 0; j < col; ++j)
//             cout << arr[i][j] << "\t";
//         cout << endl;
//     }
//     class sparse o[c];
//     c=0;
//     for(int i=0;i<row;i++)
//     {
//         for(j=0;j<col;j++)
//         {
//             if(arr[i][j]!=0)
//             {
//                 o[c].row=i;
//                 o[c].col=j;
//                 o[c++].val=arr[i][j];
//             }
//         }
//     }
//     cout<<"\nThe original matrix as array of objects is: \n";
//     cout<<"ROW\tCOL\tVALUE\n";
//     for(i=0;i<c;i++)
//     {
//         cout<<o[i].row<<"\t";
//         cout<<o[i].col<<"\t";
//         cout<<o[i].val<<"\n";
//     }
//     int t[col][row];
//     cout<<"\nThe transposed matrix as 2D array is:\n";
//     for (i = 0; i < row; ++i){
//         for (j = 0; j < col ; ++j)
//         {
//             t[j][i]=arr[i][j];
//         }
//     }
//     for(i=0;i<col;i++)
//     {
//         for(j=0;j<row;j++)
//         cout<<t[i][j]<<"\t";
//         cout<<endl;
//     }
//     class sparse tt[k];
//     c=0;
//     for(int i=0;i<col;i++)
//     {
//         for(j=0;j<row;j++)
//         {
//             if(t[i][j]!=0)
//             {
//                 tt[c].row=i;
//                 tt[c].col=j;
//                 tt[c++].val=t[i][j];
//             }
//         }
//     }

//     cout<<"\n\nThe transpose matrix as array of objects is: \n";
//     cout<<"ROW\tCOL\tVALUE\n";
//     for(i=0;i<c;i++)
//     {
//         cout<<tt[i].row<<"\t";
//         cout<<tt[i].col<<"\t";
//         cout<<tt[i].val<<"\n";
//     }
//     cout<<endl;
// }

/*








*/

// int r(int n){
//     if(n==0 or n==1) return 1;
//     else return n*r(n-1);
// }
// int main()
// {
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;
//     cout<<"The factorial of n is: "<<r(n);
// }

// int gcd(int a,int b){
//     if(a==0) return b;
//     else if(b==0) return a;
//     else return gcd(b,a%b);
// }
// int main()
// {
//     int a,b;
//     cout << "Enter two numbers : ";
//     cin>>a>>b;
//     cout<<"The gcd is: "<<gcd(a,b);
// }

// int fibo(int n){
//     if (n == 0 || n == 1 ) return n;
//     else return fibo(n-1)+fibo(n-2);
// }
// int main()
// {
//     int n;
//     cout<<"Enter no of terms: ";
//     cin>>n;
//     cout<<"\nFibonacci series upto "<<n<<"th term are:\t";
//     for(int i=0;i<n;i++)
//     {
//         cout<<fibo(i)<<"\t";
//     }
//     cout<<endl;
// }

// void toh(int n,char s,char d,char a)
// {
//     if(n==1) cout<<s<<" -> "<<d<<endl;
//     else{
//         toh(n-1,s,a,d);
//         cout<<s<<" -> "<<d<<endl;
//         toh(n-1,a,d,s);
//     }
// }
// int main()
// {
//     int n;
//     cout<<"Enter no of disks: ";
//     cin>>n;
//     char s='A',d='C',a='B';
//     toh(n,s,d,a);
// }

// int len(char s[], int i)
// {
//     if (s[i] == '\0')
//         return i;
//     else
//     {
//         return len(s, i+1);
//     }
// }
// int main()
// {
//     char s[100];
//     cout << "Enter the string: ";
//     cin.getline(s, 100);
//     cout << "The length of the string is: " << len(s, 0);
// }

// int palin(char s[], int f, int r)
// {
//     if (f>r) return 1;
//     if(s[f]==s[r]){
//         return palin(s,f+1,r-1);
//     }
//     return 0;

// }
// int main()
// {
//     char s[100];
//     cout << "Enter the string: ";
//     cin.getline(s, 100);
//     int i = 0;
//     while (s[i] != '\0')
//         i++;
//     int flag=palin(s, 0, i-1);
//     if(flag==0)
//     cout<<"Not a palindrome";
//     else cout<<"palindrome";
// }

class stack
{
    int top;
    int *arr;
    int size;

public:
    stack(int sx)
    {
        size = sx;
        top = -1;
        arr = new int[size];
    }

    void push()
    {
        if (!isFull())
        {
            cout << "Enter value to push: ";
            int val;
            cin >> val;
            arr[++top] = val;
        }
        else
            cout << "Stack overflow\n";
    }
    void pop()
    {
        if (isEmpty())
            cout << "Stack underflow\n";
        else
        {
            cout << "\nPopped element:" << arr[top--]<<endl;
        }
    }
    void peek()
    {
        cout << "element: " << arr[top]<<endl;
    }
    bool isEmpty()
    {
        if (top == -1)
            return true;
        else
            return false;
    }
    bool isFull()
    {
        return (top == size - 1);
    }
    void display()
    {
        cout << "The elements in the stack are: \n";
        for (int i = 0; i <= top; i++)
            cout << arr[i] << "\t";
        cout<<endl;
    }
};
int main()
{
    cout << "1)push\n2)pop\n3)peek\n4)display stack\n5)isEmpty\n6)isFull7)Exit\n\n";
    int ch = 0;
    cout << "Enter the size of the stack: ";
    int n = 0;
    cin >> n;
    class stack a(n);
    do
    {
        cout << "Enter choice: ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            a.push();
            break;
        case 2:
            a.pop();
            break;
        case 3:
            a.peek();
            break;
        case 4:
            a.display();
            break;
        case 5:
            if (a.isEmpty())
                cout << "Stack empty" << endl;
            else
                cout << "\nstack not empty" << endl;
            break;
        case 6:
            if (a.isFull())
                cout << "Stack full" << endl;
            else
                cout << "\nstack not Full" << endl;
            break;
        case 7:
            cout << "Exit\n";
            break;
        default:
            cout << "Invalid choice\n";
            break;
        }
    } while (ch != 7);
}

/*





*/
class stack
{
    int top, *arr;

public:
    stack()
    {
        top = -1;
        arr = new int[100];
    }
    void push(char a)
    {
        arr[++top] = a;
    }
    void pop()
    {
        top--;
    }
    bool isEmpty()
    {
        return (top == -1);
    }
    char peek()
    {
        return arr[top];
    }
};
int main()
{
    int i, j, n, flag = 0;
    char s[100], ch;
    cout << "Enter the string : ";
    cin.getline(s, 100);
    class stack stack;
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == '(' or s[i] == '[' or s[i] == '{')
            stack.push(s[i]);
        if (stack.isEmpty())
            flag = 1;
        switch (s[i])
        {
        case ')':
            ch = stack.peek();
            stack.pop();
            if (ch == '{' or ch == '[')
                flag = 1;
            break;
        case ']':
            ch = stack.peek();
            stack.pop();
            if (ch == '{' or ch == '(')
                flag = 1;
            break;
        case '}':
            ch = stack.peek();
            stack.pop();
            if (ch == '(' or ch == '[')
                flag = 1;
            break;
        }

    }
    if (stack.isEmpty())
            flag = 0;
    if (flag == 0)
            cout << "Balanced";
        else
            cout << "Not Balanced";
}
/*





*/
struct Stack
{
    int top;
    int arr[100];

    Stack()
    {
        top = -1;
    }

    void push(char a)
    {
        arr[++top] = a;
    }
    void pop()
    {
        top--;
    }
    char peek()
    {
        return arr[top];
    }
    bool isEmpty()
    {
        return (top == -1);
    }
};
int main()
{
    int n, i = 0, flag = 0;
    char str[100];
    cout << "Enter the string: ";
    cin.getline(str, 100);
    Stack s;
    n = strlen(str);
    n = n / 2;
    if (n % 2 == 0)
    {
        for (i = 0; i < n; i++)
            s.push(str[i]);
    }
    else
    {
        for (i = 0; i <= n; i++)
            s.push(str[i]);
    }
    for (i = n; str[i] != '\0'; i++)
    {
        char ch = s.peek();
        s.pop();
        if (ch != str[i])
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        cout << "Palindrome";
    else
        cout << "Not a palindrome";
}

/*






*/
int prec(char a)
{
    if (a == '+' or a == '-')
        return 1;
    else if (a == '*' or a == '/')
        return 2;
    else if (a == '^')
        return 3;
    else
        return -1;
}
struct stack
{
    int arr[100], top;
    stack()
    {
        top = -1;
    }
    void push(char a)
    {
        arr[++top] = a;
    }
    void pop()
    {
        top--;
    }
    char peek()
    {
        return arr[top];
    }
    bool isEmpty()
    {
        return (top == -1);
    }
};

int main()
{
    char in[100], post[100], pre[100], temp;
    cout << "Enter the infix Expression: ";
    cin.getline(in, 100);
    stack s;
    int n = strlen(in), k = 0, ch = 0;
    cout<<"1)postfix\n2)prefix\n\nEnter your choice: ";
    cin>>ch;
    if (ch == 1)
    {
        in[n] = ')';
        s.push('(');
        for (int i = 0; i <= n; i++)
        {
            if (in[i] == '(' or in[i] == ')')
            {
                if (in[i] == '(')
                    s.push(in[i]);
                else
                {
                    while (s.peek() != '(')
                    {
                        post[k++] = s.peek();
                        s.pop();
                    }
                    s.pop();
                }
            }
            else if (in[i] == '+' or in[i] == '-' or in[i] == '*' or in[i] == '/' or in[i] == '^')
            {
                while (prec(in[i]) <= prec(s.peek()))
                {
                    temp = s.peek();
                    post[k++] = temp;
                    s.pop();
                }
                s.push(in[i]);
            }
            else
                post[k++] = in[i];
        }
        while (!s.isEmpty())
        {
            temp = s.peek();
            post[k++] = temp;
            s.pop();
        }
        cout << "The postfix expression is: " << post;
    }
    else{

        for (int i = n-1; i >=0 ; i--)
        {
            if (in[i] == '(' or in[i] == ')')
            {
                if (in[i] == ')')
                    s.push(in[i]);
                else
                {
                    while (s.peek() != ')')
                    {
                        pre[k++] = s.peek();
                        s.pop();
                    }
                    s.pop();
                }
            }
            else if (in[i] == '+' or in[i] == '-' or in[i] == '*' or in[i] == '/' or in[i] == '^')
            {
                while (prec(in[i]) < prec(s.peek()))
                {
                    temp = s.peek();
                    pre[k++] = temp;
                    s.pop();
                }
                s.push(in[i]);
            }
            else
                pre[k++] = in[i];
        }
        while (!s.isEmpty())
        {
            temp = s.peek();
            pre[k++] = temp;
            s.pop();
        }
        cout << "The postfix expression is: ";
        for(int l=k-1;l>=0;l--)
        cout<<pre[l];
    }
}

struct queue
{
    int rear, front, size;
    int *a;
    queue(int sz)
    {
        rear = 0;
        front = 0;
        size = sz;
        a=new int[size];
    }
    void enqueue()
    {
        if (isFull())
            cout << "Queue overflow\n";
        else
        {
            cout << "Enqueue value: ";
            cin >> a[rear++];
        }
    }
    void dequeue()
    {
        if (isEmpty())
            cout << "Queue underflow\n";
        else
            front++;
    }
    bool isEmpty()
    {
        return (front == rear);
    }
    bool isFull()
    {
        return (rear == size);
    }
    int start()
    {
        return a[front];
    }
    int end()
    {
        return a[rear-1];
    }
    void display()
    {
        cout << "The elements in queue are:\n";
        for (int i = front; i < rear; i++)
            cout << a[i] << "\t";
        cout << endl;
    }
};

int main()
{
    cout << "1)enqueue\n2)dequeue\n3)display\n4)isEmpty\n5)isFull\n6)start\n7)end\n8)exit\n\n";
    int ch=0, size;
    cout << "Enter size of the queue: ";
    cin >> size;
    queue q(size);
    do
    {
        cout << "Enter choice: ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            q.enqueue();
            break;
        case 2:
            q.dequeue();
            break;
        case 3:
            q.display();
            break;
        case 4:
            if (q.isEmpty())
                cout << "Queue is empty\n";
            else
                cout << "not empty\n";
            break;
        case 5:
            if (q.isFull())
                cout << "queue is full\n";
            else
                cout << "not full\n";
            break;
        case 6:
            cout << q.start() << endl;
            break;
        case 7:
            cout << q.end() << endl;
            break;
        case 8:
            cout << "Exit\n";
            break;
        default:
            cout << "Invalid choice\n";
            break;
        }
    } while (ch != 8);
}

/*







*/
struct queue
{
    int rear, front, size,c;
    int *a;
    queue(int sz)
    {
        rear = 0;
        front = 0;
        size = sz;
        c=0;
        a = new int[size];
    }
    void enqueue()
    {
        if (isFull())
            cout << "Queue overflow\n";
        else
        {
            if (rear == size && front > 0)
                rear = 0;
            cout << "Enqueue value: ";
            cin >> a[rear++];
            c++;
        }
    }
    void dequeue()
    {
        if (isEmpty())
            cout << "Queue underflow\n";
        else
        {
            if (front == size and rear > 0)
                front = 0;
            front++;
            c--;
        }
    }
    bool isEmpty()
    {
        return (c==0);
    }
    bool isFull()
    {
        return (c==size);
    }
    int start()
    {
        return a[front];
    }
    int end()
    {
        return a[rear - 1];
    }
    void display()
    {
        cout << "The elements in queue are:\n";
        if(rear>front){
        for (int i = front; i < rear; i++)
            cout << a[i] << "\t";
        cout << endl;
        }
        else{
            for(int i=front;i<size;i++)
            cout<<a[i]<<"\t";
            for(int j=0;j<rear;j++)
            cout<<a[j]<<"\t";
            cout<<endl;
        }
    }
};

int main()
{
    cout << "1)enqueue\n2)dequeue\n3)display\n4)isEmpty\n5)isFull\n6)start\n7)end\n8)exit\n\n";
    int ch = 0, size;
    cout << "Enter size of the queue: ";
    cin >> size;
    queue q(size);
    do
    {
        cout << "Enter choice: ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            q.enqueue();
            break;
        case 2:
            q.dequeue();
            break;
        case 3:
            q.display();
            break;
        case 4:
            if (q.isEmpty())
                cout << "Queue is empty\n";
            else
                cout << "not empty\n";
            break;
        case 5:
            if (q.isFull())
                cout << "queue is full\n";
            else
                cout << "not full\n";
            break;
        case 6:
            cout << q.start() << endl;
            break;
        case 7:
            cout << q.end() << endl;
            break;
        case 8:
            cout << "Exit\n";
            break;
        default:
            cout << "Invalid choice\n";
            break;
        }
    } while (ch != 8);
}



