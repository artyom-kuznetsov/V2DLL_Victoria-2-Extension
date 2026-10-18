// __initp_misc_cfltcvt_tab @ 00abeb8a body=[[00abeb8a, 00abebac]]


/* Library Function - Single Match
    __initp_misc_cfltcvt_tab
   
   Library: Visual Studio 2010 Release */

void __initp_misc_cfltcvt_tab(void)

{
  PVOID pvVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    pvVar1 = EncodePointer(*(PVOID *)((int)&Ptr_00ef3150 + uVar2));
    *(PVOID *)((int)&Ptr_00ef3150 + uVar2) = pvVar1;
    uVar2 = uVar2 + 4;
  } while (uVar2 < 0x28);
  return;
}

