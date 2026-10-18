// FUN_00ad9ab0 @ 00ad9ab0 body=[[00ad9ab0, 00ad9bd1]]


char FUN_00ad9ab0(int *param_1)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  char *pcStack_28;
  undefined4 local_1c;
  undefined4 local_18;
  int *piStack_14;
  int *piStack_10;
  int iStack_4;
  
  local_1c = 0;
  local_18 = 0;
  pcStack_28 = (char *)0xad9ad4;
  iVar2 = (**(code **)(*param_1 + 4))();
  if (iVar2 != 2) {
    pcStack_28 = "Given file is not a memory file. Cannot process pre-passes.";
    FUN_00b15d30();
    return '\0';
  }
  pcStack_28 = "j";
  FUN_00b00ea0();
  pcStack_28 = (char *)0x0;
  piStack_14 = param_1;
  piStack_10 = param_1;
  cVar1 = FUN_00aed9c0(in_ECX + 4,&piStack_14,0);
  if (cVar1 != '\0') {
    pcStack_28 = (char *)0x0;
    (**(code **)(*param_1 + 0x84))();
    cVar1 = FUN_00ad9630(param_1,&stack0xffffffe0,&local_1c);
    if (cVar1 == '\x01') {
      (**(code **)(*param_1 + 100))();
      return '\x01';
    }
    (**(code **)(*param_1 + 0x84))(0);
    cVar1 = FUN_00ad97a0(param_1,&stack0xffffffdc,&iStack_4);
    if (cVar1 == '\x01') {
      (**(code **)(*param_1 + 100))();
      return (iStack_4 != 0) + '\x02';
    }
    (**(code **)(*param_1 + 0x84))(0);
    cVar1 = FUN_00ad98e0(param_1,&pcStack_28);
    if (cVar1 == '\x01') {
      (**(code **)(*param_1 + 100))();
      return '\x04';
    }
    (**(code **)(*param_1 + 100))();
  }
  return '\0';
}

