#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;


int main(string path, string motif)
{

    int somme = 0;

    ifstream text(path, ios::in);
    if (text)
		{
            text.clear();
 
            text.seekg(0, ios::beg);
            string mot;
            while (text >> mot)
            {
		bool estCompte = 0;
                if (mot.size() >= motif.size())
                {
                    for (int i = 0; i < mot.size(); i++)
                    {
                        if (mot[i] == motif[0] && !estCompte)
                        {
                            int j = 1;
                            for (int k = 1; k < motif.size(); k++)
                            {
                                if (mot[i + k] == motif[k])
                                {
                                    j++;
                                }                                     
                            }
                            if (j == motif.size())
                            {
                                somme += 1;
				estCompte = 1;
                            }
                        }
                    }
                }
            }

            text.close();
            cout << "The file " << path << " contains " << somme << " words containing the motive " << motif << endl;
		}
	else
		cout << "The file " << path << " could not be opened." << endl;

	return 0;
}
