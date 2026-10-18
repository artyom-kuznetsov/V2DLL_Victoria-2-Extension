// FID_conflict:_sscanf @ 00aaebf8 body=[[00aaebf8, 00aaec19]]


/* Library Function - Multiple Matches With Different Base Names
    _sscanf
    _sscanf_s
   
   Library: Visual Studio 2010 Release */

int __cdecl FID_conflict__sscanf(char *_Src,char *_Format,...)

{
  int iVar1;
  
  iVar1 = vscan_fn(__input_l,_Format,0,&stack0x0000000c);
  return iVar1;
}

