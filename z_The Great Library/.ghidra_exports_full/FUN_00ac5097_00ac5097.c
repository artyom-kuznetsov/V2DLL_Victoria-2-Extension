// getString @ 00ac5097 body=[[00ac5097, 00ac50bf]]


/* Library Function - Single Match
    public: virtual char * __thiscall DNameStatusNode::getString(char *,char *)const 
   
   Library: Visual Studio 2010 Release */

char * __thiscall DNameStatusNode::getString(DNameStatusNode *this,char *param_1,char *param_2)

{
  if (*(int *)(this + 4) == 1) {
    param_1 = getStringHelper(param_1,param_2," ?? ",4);
  }
  return param_1;
}

