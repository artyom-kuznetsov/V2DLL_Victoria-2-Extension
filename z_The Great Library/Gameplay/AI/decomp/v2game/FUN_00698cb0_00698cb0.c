// FUN_00698cb0 @ 00698cb0 body=[[00698cb0, 00698d4f] [00698d53, 00698db7]]


int * FUN_00698cb0(void)

{
  char cVar1;
  char *pcVar2;
  int *piVar3;
  int in_ECX;
  int *unaff_EDI;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  char local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00bbc108;
  local_10 = ExceptionList;
  cVar1 = (char)(in_ECX / 10);
  local_14[1] = cVar1 + '0';
  pcVar2 = local_14;
  local_14[0] = 't';
  local_14[2] = (char)in_ECX + cVar1 * -10 + '0';
  local_14[3] = 0;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  ExceptionList = &local_10;
  FUN_00409350(local_14,(int)pcVar2 - (int)(local_14 + 1));
  local_8 = 0;
  piVar3 = (int *)(**(code **)(*unaff_EDI + 0x3c))(local_30);
  local_8 = 0xffffffff;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0x34))();
    ExceptionList = local_10;
    return piVar3;
  }
  piVar3 = (int *)FUN_009e5eb0(unaff_EDI,local_14);
  (**(code **)(*piVar3 + 0x34))();
  ExceptionList = local_10;
  return piVar3;
}

