// FUN_0060d220 @ 0060d220 body=[[0060d220, 0060d294] [0060d298, 0060d2f8] [0060d2fc, 0060d351] [0060d355, 0060d368]]


/* WARNING: Removing unreachable block (ram,0x0060d2f0) */

undefined4 FUN_0060d220(undefined4 param_1,uint *param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *in_ECX;
  char *in_EDX;
  uint local_44 [4];
  undefined4 local_34;
  uint local_30;
  undefined1 local_28 [4];
  int local_24;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b6ddeb;
  local_10 = ExceptionList;
  local_14 = 0;
  local_30 = 0xf;
  local_34 = 0;
  local_44[0] = local_44[0] & 0xffffff00;
  pcVar2 = in_EDX;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  ExceptionList = &local_10;
  FUN_00409350(in_EDX,(int)pcVar2 - (int)(in_EDX + 1));
  local_8 = 1;
  FUN_009a8ee0(local_28,local_44);
  local_8._0_1_ = 3;
  if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_30 = 0xf;
  local_34 = 0;
  local_44[0] = local_44[0] & 0xffffff00;
  pcVar2 = in_ECX;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(in_ECX,(int)pcVar2 - (int)(in_ECX + 1));
  local_8._0_1_ = 4;
  FUN_009a99f0(local_28,*param_2 >> 0xf | param_2[1] << 0x11);
  local_8 = CONCAT31(local_8._1_3_,3);
  iVar3 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar3 + 0x6c),*(undefined8 *)(iVar3 + 0x74));
  local_14 = 1;
  local_8 = 5;
  FUN_009adb70();
  if (local_24 == 0) {
    ExceptionList = local_10;
    return param_1;
  }
  FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

