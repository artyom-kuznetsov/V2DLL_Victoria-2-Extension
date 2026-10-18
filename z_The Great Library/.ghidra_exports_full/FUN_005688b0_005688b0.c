// FUN_005688b0 @ 005688b0 body=[[005688b0, 0056893c] [00568940, 00568a0e] [00568a12, 00568a77] [00568a7b, 00568ae0] [00568ae4, 00568bd0] [00568bd4, 00568c3d] [00568c41, 00568c7d]]


void FUN_005688b0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int in_ECX;
  int local_264;
  undefined4 local_258;
  uint local_244;
  uint local_23c;
  uint local_228;
  char local_21c [256];
  undefined4 local_11c;
  char local_118 [260];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_00b532e0;
  local_14 = ExceptionList;
  local_264 = 0;
  piVar4 = DAT_0125eadc;
  ExceptionList = &local_14;
  do {
    local_c = 0xffffffff;
    piVar2 = DAT_0125eadc;
    if (piVar4 == (int *)0x0) {
      iVar3 = FUN_00aae9af(0x9c);
      local_c = 0;
      if (iVar3 == 0) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4 = (int *)FUN_00576fe0(iVar3);
      }
      piVar1 = DAT_0125eadc;
      local_c = 1;
      piVar2 = piVar4;
      if ((piVar4 != DAT_0125eadc) && (DAT_0125eadc != (int *)0x0)) {
        FUN_00576d10(DAT_0125eadc);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(piVar1);
      }
    }
    DAT_0125eadc = piVar2;
    local_c = 0xffffffff;
    if (piVar4[1] - *piVar4 >> 2 <= local_264) {
      ExceptionList = local_14;
      return;
    }
    if ((*(int *)(*(int *)(in_ECX + 0x2c8) + local_264 * 4) != 0) ||
       (*(int *)(local_264 * 4 + *(int *)(in_ECX + 0x2b8)) != 0)) {
      if ((*(char *)(param_1 + 0xc) == '\0') && (*(int *)(param_1 + 4) != 0)) {
        FUN_009a08a0(param_1,*(int *)(param_1 + 4) + -1);
      }
      puVar5 = (undefined4 *)FUN_00990880();
      local_c = 4;
      if (0xf < (uint)puVar5[5]) {
        puVar5 = (undefined4 *)*puVar5;
      }
      __snprintf(local_21c,0xff,"%s",puVar5);
      FUN_0099ff90(param_1);
      local_c = 0xffffffff;
      if (0xf < local_244) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_258);
      }
      puVar5 = (undefined4 *)FUN_00990880();
      local_c = 5;
      if (0xf < (uint)puVar5[5]) {
        puVar5 = (undefined4 *)*puVar5;
      }
      __snprintf(local_21c,0xff,"%s",puVar5);
      FUN_0099ff90(param_1);
      local_c = 0xffffffff;
      if (0xf < local_244) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_258);
      }
      puVar5 = (undefined4 *)FUN_00990880();
      local_c = 6;
      if (0xf < (uint)puVar5[5]) {
        puVar5 = (undefined4 *)*puVar5;
      }
      __snprintf(local_21c,0xff,"%s",puVar5);
      FUN_0099ff90(param_1);
      local_c = 0xffffffff;
      if (0xf < local_244) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_258);
      }
      _sprintf(local_21c,"%d",*(undefined4 *)(local_264 * 4 + *(int *)(in_ECX + 0x2b8)));
      FUN_0099ff90(param_1);
      if (*(char *)(param_1 + 0xc) == '\0') {
        __snprintf(local_21c,0xff,"%s",&DAT_00ded950);
        FUN_0099ff90(param_1);
      }
      FUN_0098fad0();
      FUN_0099ff90(param_1);
      puVar5 = (undefined4 *)FUN_00990880();
      local_c = 7;
      if (0xf < (uint)puVar5[5]) {
        puVar5 = (undefined4 *)*puVar5;
      }
      __snprintf(local_21c,0xff,"%s",puVar5);
      FUN_0099ff90(param_1);
      local_c = 0xffffffff;
      if (0xf < local_244) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_258);
      }
      puVar5 = (undefined4 *)FUN_00990880();
      local_c = 8;
      local_11c = 0x10;
      if (0xf < (uint)puVar5[5]) {
        puVar5 = (undefined4 *)*puVar5;
      }
      __snprintf(local_118,0xff,"%s",puVar5);
      FUN_0099ff90(param_1);
      local_c = 0xffffffff;
      if (0xf < local_228) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_23c);
      }
      local_228 = 0xf;
      local_23c = local_23c & 0xffffff00;
      piVar4 = DAT_0125eadc;
    }
    local_264 = local_264 + 1;
  } while( true );
}

