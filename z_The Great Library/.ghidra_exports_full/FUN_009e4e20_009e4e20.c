// FUN_009e4e20 @ 009e4e20 body=[[009e4e20, 009e4eae] [009e4eb0, 009e4ee1] [009e4ee5, 009e4f74] [009e4f7e, 009e4f86]]


void FUN_009e4e20(int param_1)

{
  void *_Src;
  void *_Dst;
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int in_ECX;
  int iVar5;
  undefined4 *puVar6;
  
  iVar5 = 0;
  iVar3 = *(int *)(in_ECX + 0x310) - *(int *)(in_ECX + 0x30c) >> 2;
  if (0 < iVar3) {
    piVar4 = *(int **)(in_ECX + 0x30c);
    do {
      if (*piVar4 == param_1) {
        _Dst = (void *)(*(int *)(in_ECX + 0x30c) + iVar5 * 4);
        _Src = (void *)((int)_Dst + 4);
        FID_conflict__memcpy(_Dst,_Src,(*(int *)(in_ECX + 0x310) - (int)_Src >> 2) * 4);
        *(int *)(in_ECX + 0x310) = *(int *)(in_ECX + 0x310) + -4;
        iVar1 = *(int *)(in_ECX + 800);
        iVar3 = *(int *)(in_ECX + 0x31c) + iVar5 * 0x1c;
        while (iVar3 = iVar3 + 0x1c, iVar3 != iVar1) {
          FUN_00408ed0(iVar3,0,0xffffffff);
        }
        puVar2 = *(undefined4 **)(in_ECX + 800);
        for (puVar6 = puVar2 + -7; puVar6 != puVar2; puVar6 = puVar6 + 7) {
          if (0xf < (uint)puVar6[5]) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(*puVar6);
          }
          puVar6[5] = 0xf;
          puVar6[4] = 0;
          *(undefined1 *)puVar6 = 0;
        }
        *(int *)(in_ECX + 800) = *(int *)(in_ECX + 800) + -0x1c;
        break;
      }
      iVar5 = iVar5 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar5 < iVar3);
  }
  piVar4 = *(int **)(in_ECX + 0x80);
  if (piVar4 != (int *)0x0) {
    while (*piVar4 != param_1) {
      piVar4 = (int *)piVar4[2];
      if (piVar4 == (int *)0x0) {
        return;
      }
    }
    if (piVar4 != (int *)0x0) {
      if (*(char *)(in_ECX + 0x8c) == '\0') {
        iVar3 = piVar4[1];
        iVar5 = piVar4[2];
        if (iVar3 != 0) {
          *(int *)(iVar3 + 8) = iVar5;
        }
        if (iVar5 != 0) {
          *(int *)(iVar5 + 4) = iVar3;
        }
        if (piVar4 == *(int **)(in_ECX + 0x80)) {
          *(int *)(in_ECX + 0x80) = iVar5;
        }
        if (piVar4 == *(int **)(in_ECX + 0x84)) {
          *(int *)(in_ECX + 0x84) = iVar3;
        }
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(piVar4);
      }
      *(undefined1 *)(piVar4 + 3) = 1;
      return;
    }
  }
  return;
}

