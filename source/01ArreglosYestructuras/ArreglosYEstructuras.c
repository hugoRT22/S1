/** ArreglosYEstructuras.c
i=indice del arreglo
*/
static 
unsigned int boleta[]={
 2009640001,
 2020640999,
 2015640055,
 2019362050
};


unsigned int min_num()
{
  unsigned int r=boleta[0],i;
  for(i=1;i<sizeof(boleta)/sizeof(unsigned int);i++)
  {
     if(boleta[i]<r){ 
       r=boleta[i]; 
     } 
  }
  return r;     
};

unsigned int min_num()
{
  unsigned int r=boleta[0],i;
  for(i=1;i<sizeof(boleta)/sizeof(unsigned int);i++)
  {
     if(boleta[i]<r){
       r=boleta[i];       
     }
  }
  return r;
};


