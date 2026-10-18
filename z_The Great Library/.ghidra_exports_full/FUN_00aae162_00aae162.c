// __Getwctype @ 00aae162 body=[[00aae162, 00aae185]]


/* Library Function - Single Match
    __Getwctype
   
   Libraries: Visual Studio 2010 Release, Visual Studio 2012 Release */

short __cdecl __Getwctype(wchar_t param_1,_Ctypevec *param_2)

{
  BOOL BVar1;
  ushort local_8 [2];
  
  BVar1 = GetStringTypeW(1,&param_1,1,local_8);
  return -(ushort)(BVar1 != 0) & local_8[0];
}

