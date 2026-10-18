// FUN_0092dc30 @ 0092dc30 body=[[0092dc30, 0092dd53] [0092dd57, 0092ddf2] [0092ddf6, 0092de91] [0092de95, 0092df62] [0092df66, 0092dfd7] [0092dfdb, 0092e056] [0092e05a, 0092e0d1] [0092e0d5, 0092e177] [0092e17b, 0092e218] [0092e21c, 0092e232]]


/* WARNING: Removing unreachable block (ram,0x0092e0c8) */
/* WARNING: Removing unreachable block (ram,0x0092e20f) */
/* WARNING: Removing unreachable block (ram,0x0092dfce) */

void FUN_0092dc30(undefined4 param_1)

{
  char cVar1;
  char *pcVar2;
  int in_ECX;
  uint local_194;
  uint local_178;
  uint local_140;
  uint local_124;
  char local_118 [260];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b586d3;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_009a0940();
  _sprintf(local_118,"%d");
  FUN_0099ff90();
  FUN_004013e0();
  if (*(char *)(in_ECX + 0x60) != '\0') {
    FUN_009a0940();
    FUN_004013e0();
    FUN_004013e0();
  }
  if (1 < (int)((double)((*(int *)(in_ECX + 100) + -43800000) / 0x18) / 365.0)) {
    FUN_0043acd0(in_ECX + 100);
    local_c = 0;
    FUN_009a0940();
    FUN_0099f770(param_1);
    local_c = 0xffffffff;
    if (0xf < local_140) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  if (1 < (int)((double)((*(int *)(in_ECX + 0x68) + -43800000) / 0x18) / 365.0)) {
    FUN_0043acd0(in_ECX + 0x68);
    local_c = 1;
    FUN_009a0940();
    FUN_0099f770(param_1);
    local_c = 0xffffffff;
    if (0xf < local_124) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  if (1 < (int)((double)((*(int *)(in_ECX + 0x6c) + -43800000) / 0x18) / 365.0)) {
    FUN_0043acd0(in_ECX + 0x6c);
    local_c = 2;
    FUN_009a0940();
    FUN_0099f770(param_1);
    local_c = 0xffffffff;
    if (0xf < local_178) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_178 = 0xf;
  }
  if (*(char *)(in_ECX + 0x8c) != '\0') {
    FUN_0099f470();
  }
  if (*(int *)(in_ECX + 0x84) != 0) {
    FUN_0099f1e0();
  }
  if (*(int *)(in_ECX + 0x88) != 0) {
    FUN_0099f1e0();
  }
  if (*(int *)(DAT_012588e8 + 0xb0c) <= *(int *)(in_ECX + 0x90)) {
    FUN_0043acd0(in_ECX + 0x90);
    local_c = 3;
    FUN_009a0940();
    FUN_0099f770(param_1);
    local_c = 0xffffffff;
    if (0xf < local_194) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    pcVar2 = (char *)(in_ECX + 0x94);
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    FUN_00409350((char *)(in_ECX + 0x94));
    local_c = 4;
    FUN_009a0940();
    FUN_0099f770(param_1);
    local_c = 0xffffffff;
  }
  if (*(int *)(DAT_012588e8 + 0xb0c) <= *(int *)(in_ECX + 0x9c)) {
    FUN_0043acd0(in_ECX + 0x9c);
    local_c = 5;
    FUN_009a0940();
    FUN_0099f770(param_1);
    local_c = 0xffffffff;
    if (0xf < local_178) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    pcVar2 = (char *)(in_ECX + 0xa0);
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    FUN_00409350((char *)(in_ECX + 0xa0));
    local_c = 6;
    FUN_009a0940();
    FUN_0099f770(param_1);
    local_c = 0xffffffff;
  }
  if (*(int *)(in_ECX + 0x40) != 2) {
    FUN_009a0940();
    _sprintf(local_118,"%d");
    FUN_0099ff90();
    FUN_004013e0();
  }
  if (*(int *)(in_ECX + 0x44) != DAT_0131b2f0) {
    FUN_0043acd0(in_ECX + 0x44);
    local_c = 7;
    FUN_009a0940();
    FUN_0099f770(param_1);
    local_c = 0xffffffff;
    if (0xf < local_178) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  if (*(int *)(in_ECX + 0x48) != 0) {
    FUN_0099f1e0();
  }
  if (*(int *)(in_ECX + 0x4c) != 0) {
    FUN_0099f1e0();
  }
  if (*(int *)(in_ECX + 0x1c) != 0) {
    pcVar2 = (char *)(in_ECX + 0x18);
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    FUN_00409350((char *)(in_ECX + 0x18));
    local_c = 8;
    FUN_009a0940();
    FUN_0099f770(param_1);
  }
  ExceptionList = local_14;
  return;
}

