// name @ 00aae926 body=[[00aae926, 00aae939]]


/* Library Function - Single Match
    public: char const * __thiscall type_info::name(struct __type_info_node *)const 
   
   Library: Visual Studio 2010 Release */

char * __thiscall type_info::name(type_info *this,__type_info_node *param_1)

{
  char *pcVar1;
  
  pcVar1 = _Name_base(this,param_1);
  return pcVar1;
}

