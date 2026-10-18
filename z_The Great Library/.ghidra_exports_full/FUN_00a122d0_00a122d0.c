// FUN_00a122d0 @ 00a122d0 body=[[00a122d0, 00a1241c]]


void FUN_00a122d0(undefined4 param_1,int *param_2)

{
  undefined4 *puVar1;
  int unaff_ESI;
  int iVar2;
  int local_114;
  int local_110;
  char local_108 [260];
  
  iVar2 = param_2[1] - *param_2 >> 0x1f;
  if ((param_2[1] - *param_2) / 0x1c + iVar2 != iVar2) {
    FUN_009a0940(unaff_ESI);
    if (*(int *)(unaff_ESI + 4) == -1) {
      *(undefined4 *)(unaff_ESI + 4) = 0;
    }
    else {
      FUN_004013e0(unaff_ESI);
      if ((*(char *)(unaff_ESI + 0xc) == '\0') && (*(int *)(unaff_ESI + 4) != 0)) {
        FUN_009a08a0(unaff_ESI,*(int *)(unaff_ESI + 4) + -1);
      }
      FUN_004013e0(unaff_ESI);
      FUN_004013e0(unaff_ESI);
    }
    *(int *)(unaff_ESI + 4) = *(int *)(unaff_ESI + 4) + 1;
    iVar2 = *param_2;
    local_114 = 0;
    if (0 < (param_2[1] - iVar2) / 0x1c) {
      local_110 = 0;
      do {
        puVar1 = (undefined4 *)(local_110 + iVar2);
        if (0xf < (uint)puVar1[5]) {
          puVar1 = (undefined4 *)*puVar1;
        }
        __snprintf(local_108,0xff,"%s",puVar1);
        FUN_0099ff90(unaff_ESI);
        iVar2 = *param_2;
        local_114 = local_114 + 1;
        local_110 = local_110 + 0x1c;
      } while (local_114 < (param_2[1] - iVar2) / 0x1c);
    }
    *(int *)(unaff_ESI + 4) = *(int *)(unaff_ESI + 4) + -1;
    if ((*(char *)(unaff_ESI + 0xc) == '\0') && (*(int *)(unaff_ESI + 4) != 0)) {
      FUN_009a08a0(unaff_ESI,*(int *)(unaff_ESI + 4) + -1);
    }
    if (*(int *)(unaff_ESI + 4) != -1) {
      FUN_004013e0(unaff_ESI);
      FUN_004013e0(unaff_ESI);
    }
  }
  return;
}

