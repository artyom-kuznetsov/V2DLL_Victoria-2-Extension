// equivalent @ 00aad2cc body=[[00aad2cc, 00aad2ec]]


/* Library Function - Single Match
    public: virtual bool __thiscall std::error_category::equivalent(int,class std::error_condition
   const &)const 
   
   Library: Visual Studio 2010 Release */

bool __thiscall
std::error_category::equivalent(error_category *this,int param_1,error_condition *param_2)

{
  bool bVar1;
  error_condition *this_00;
  error_condition *peVar2;
  error_category *local_c;
  error_category *peStack_8;
  
  peVar2 = (error_condition *)&local_c;
  local_c = this;
  peStack_8 = this;
  this_00 = (error_condition *)(**(code **)(*(int *)this + 0xc))(peVar2,param_1,param_2);
  bVar1 = error_condition::operator==(this_00,peVar2);
  return bVar1;
}

