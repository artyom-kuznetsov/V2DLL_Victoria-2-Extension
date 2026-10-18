// FUN_00aab050 @ 00aab050 body=[[00aab050, 00aab134]]


undefined1 * FUN_00aab050(undefined1 *param_1,undefined4 param_2,undefined4 *param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b367c9;
  local_10 = ExceptionList;
  uVar2 = DAT_00ef259c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  local_8 = 0;
  FUN_00aac990(param_2,uVar2);
  iVar3 = FUN_00aad0e0(param_3);
  if (iVar3 == 0) {
    FUN_00409350("custom",6);
    FUN_00448740(&DAT_00defe00,2);
    pcVar4 = type_info::name((type_info *)*param_3,(__type_info_node *)&DAT_00f1fc34);
    pcVar5 = pcVar4;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_00448740(pcVar4,(int)pcVar5 - (int)(pcVar4 + 1));
    iVar3 = 1;
    pcVar5 = "]";
  }
  else {
    pcVar5 = *(char **)(iVar3 + 0x14);
    pcVar4 = pcVar5;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    iVar3 = (int)pcVar4 - (int)(pcVar5 + 1);
  }
  FUN_00448740(pcVar5,iVar3);
  ExceptionList = local_10;
  return param_1;
}

