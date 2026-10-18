// FUN_00954510 @ 00954510 body=[[00954510, 00954612] [00954616, 00954630] [00954634, 00954648]]


undefined4 FUN_00954510(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  char local_6c [32];
  uint local_4c [4];
  undefined4 local_3c;
  uint local_38;
  uint local_30;
  undefined4 local_20;
  uint local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b64fc8;
  local_10 = ExceptionList;
  local_14 = (undefined1 *)0x0;
  local_1c = 0xf;
  local_20 = 0;
  local_30 = local_30 & 0xffffff00;
  local_8 = 0;
  ExceptionList = &local_10;
  pcVar3 = __itoa(*(int *)(*(int *)(DAT_012586dc + 0x30) + 0x550) / 1000,local_6c,10);
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_00409350();
  local_8 = 1;
  iVar2 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x558);
  local_14 = &stack0xffffff80;
  FUN_00401000(0x47c35040);
  iVar4 = FUN_00b31c00();
  __alldiv((longlong)iVar4 * (longlong)iVar2,1000,0);
  FUN_00988a50(local_4c);
  local_8 = CONCAT31(local_8._1_3_,2);
  FUN_0043ec10();
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

