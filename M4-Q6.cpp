/******************************************************************************
EXERCISE Q06- Digital Storage Capacity Report [Hard]
1. Start
2. Enter fileSizeBytes
3. Compute sizeKB = fileSizeBytes / 1024.0
    Compute sizeMB = sizeMB / 1024.0
    Compute sizeGB = sizeGB / 1024.0
    Compute wholeMB = long long(sizeMB)
    Display sizeKB, sizeMB, sizeGB, wholeMB
4. End
*******************************************************************************/
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    long long fileSizeBytes;

    cout << "Enter file size in bytes: ";
    cin >> fileSizeBytes;

    double sizeKB = fileSizeBytes / 1024.0;
    double sizeMB = sizeKB / 1024.0;
    double sizeGB = sizeMB / 1024.0;
    
    long long wholeMB = static_cast<long long>(sizeMB);

    cout << fixed;
    cout << "\n--- Data Storage Conversion ---" << endl;
    cout << "Size in KB: " << setprecision(2) << sizeKB << " KB" << endl;
    cout << "Size in MB: " << setprecision(2) << sizeMB << " MB" << endl;
    cout << "Size in GB: " << setprecision(4) << sizeGB << " GB" << endl;
    cout << "Whole MB portion: " << wholeMB << " MB" << endl;

    return 0;
}
