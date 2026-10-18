// FUN_00a1d500 @ 00a1d500 body=[[00a1d500, 00a1d60e] [00a1d610, 00a1d687]]


void FUN_00a1d500(uint param_1,FILE *param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auStackY_44b [27];
  undefined4 uStackY_430;
  undefined1 local_40c [1028];
  undefined1 *local_8;
  
  iVar2 = param_1;
  uStackY_430 = 0xa1d526;
  uVar3 = _fread(local_40c,1,0x400,param_2);
  while (uVar3 != 0) {
    if (*(char *)(iVar2 + 0x68) == '\0') {
      uVar7 = *(uint *)(iVar2 + 0x10) + uVar3 * 8;
      uVar6 = *(uint *)(iVar2 + 0x10) >> 3 & 0x3f;
      *(uint *)(iVar2 + 0x10) = uVar7;
      if (uVar7 < uVar3 * 8) {
        *(int *)(iVar2 + 0x14) = *(int *)(iVar2 + 0x14) + 1;
      }
      *(int *)(iVar2 + 0x14) = *(int *)(iVar2 + 0x14) + (uVar3 >> 0x1d);
      param_1 = -uVar6 + 0x40;
      if (uVar3 < param_1) {
        param_1 = 0;
      }
      else {
        if (param_1 != 0) {
          FID_conflict__memcpy((void *)(uVar6 + 0x18 + iVar2),local_40c,param_1);
        }
        FUN_00a1d850();
        uVar7 = -uVar6 + 0x7f;
        if (uVar7 < uVar3) {
          local_8 = auStackY_44b;
          do {
            FUN_00a1d850();
            param_1 = param_1 + 0x40;
            uVar7 = uVar7 + 0x40;
          } while (uVar7 < uVar3);
        }
        uVar6 = 0;
      }
      if (uVar3 - param_1 != 0) {
        FID_conflict__memcpy((void *)(uVar6 + 0x18 + iVar2),local_40c + param_1,uVar3 - param_1);
      }
    }
    else {
      piVar4 = (int *)FUN_00418e30();
      FUN_00408be0();
      bVar1 = false;
      if (((*(byte *)(*(int *)(*piVar4 + 4) + 0xc + (int)piVar4) & 6) == 0) &&
         (iVar5 = (**(code **)(**(int **)(*(int *)(*piVar4 + 4) + 0x38 + (int)piVar4) + 0x34))(),
         iVar5 == -1)) {
        bVar1 = true;
      }
      if (bVar1) {
        FUN_00401120();
      }
    }
    uStackY_430 = 0xa1d666;
    uVar3 = _fread(local_40c,1,0x400,param_2);
  }
  _fclose(param_2);
  return;
}

