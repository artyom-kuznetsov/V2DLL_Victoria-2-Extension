// equivalent @ 00aad2ed body=[[00aad2ed, 00aad30b]]


/* Library Function - Single Match
    public: virtual bool __thiscall std::error_category::equivalent(class std::error_code const
   &,int)const 
   
   Libraries: Visual Studio 2010 Release, Visual Studio 2012 Release */

bool __thiscall
std::error_category::equivalent(error_category *this,error_code *param_1,int param_2)

{
  bool bVar1;
  
  if ((this == *(error_category **)(param_1 + 4)) && (*(int *)param_1 == param_2)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

