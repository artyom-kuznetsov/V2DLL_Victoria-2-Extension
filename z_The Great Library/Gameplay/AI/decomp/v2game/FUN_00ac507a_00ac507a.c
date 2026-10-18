// getString @ 00ac507a body=[[00ac507a, 00ac5096]]


/* Library Function - Single Match
    public: virtual char * __thiscall pcharNode::getString(char *,char *)const 
   
   Library: Visual Studio 2010 Release */

char * __thiscall pcharNode::getString(pcharNode *this,char *param_1,char *param_2)

{
  char *pcVar1;
  
  pcVar1 = getStringHelper(param_1,param_2,*(char **)(this + 4),*(int *)(this + 8));
  return pcVar1;
}

