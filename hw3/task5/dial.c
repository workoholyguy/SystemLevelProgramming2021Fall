//OMAR MADJITOV
//002511575
#include <stdio.h>
#define COUNTRY_COUNT \
  ((int) (sizeof(country_codes) / sizeof(country_codes[0])))
//finding length of country_codes[] array as one / operation is used in order not to confuse compiler we use \ operation before initialization in define
struct dialing_code {//structure definition 
  char *country;
  int code;
};
//initializing array of structures
const struct dialing_code country_codes[] =
  {{"Argentina",            54}, {"Bangladesh",      880},
   {"Brazil",               55}, {"Burma (Myanmar)",  95},
   {"China",                86}, {"Colombia",         57},
   {"Congo, Dem. Rep. of", 243}, {"Egypt",            20},
   {"Ethiopia",            251}, {"France",           33},
   {"Germany",              49}, {"India",            91},
   {"Indonesia",            62}, {"Iran",             98},
   {"Italy",                39}, {"Japan",            81},
   {"Mexico",               52}, {"Nigeria",         234},
   {"Pakistan",             92}, {"Philippines",      63},
   {"Poland",               48}, {"Russia",            7},
   {"South Africa",         27}, {"South Korea",      82},
   {"Spain",                34}, {"Sudan",           249},
   {"Thailand",             66}, {"Turkey",           90},
   {"Ukraine",             380}, {"United Kingdom",   44},
   {"United States",         1}, {"Vietnam",          84}};
int main(void)
{
  int countrydailing_code, i,flag=0;
  printf("Enter dialing code: ");
  scanf("%d", &countrydailing_code);//reading country code
  for (i = 0; i < COUNTRY_COUNT; i++)
  //iterating throughout array of structures i.e. country_codes and checking if given code is present in country codes
    if (countrydailing_code == country_codes[i].code) {
      printf("The country with dialing code %d is %s\n",
             countrydailing_code, country_codes[i].country);
	printf("");
      flag=1;//if present flag=1 and print country name
    }
  if(flag==0)//if country code is not present then print error message
    printf("No corresponding country found \n");
	printf("");
  return 0;
}

