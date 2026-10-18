// __fullpath_helper @ 00ab3ae4 body=[[00ab3ae4, 00ab3b43]]


/* Library Function - Single Match
    __fullpath_helper
   
   Library: Visual Studio 2010 Release */

char * __fullpath_helper(char *param_1,char *param_2,size_t param_3,undefined4 *param_4)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  
  piVar2 = __errno();
  iVar1 = *piVar2;
  piVar2 = __errno();
  *piVar2 = 0;
  pcVar3 = __fullpath(param_1,param_2,param_3);
  piVar2 = __errno();
  if (pcVar3 == (char *)0x0) {
    if (*piVar2 == 0x22) {
      piVar2 = __errno();
      *piVar2 = iVar1;
      pcVar3 = __fullpath((char *)0x0,param_2,0);
      *param_4 = pcVar3;
    }
    else {
      pcVar3 = (char *)0x0;
    }
  }
  else {
    *piVar2 = iVar1;
  }
  return pcVar3;
}

