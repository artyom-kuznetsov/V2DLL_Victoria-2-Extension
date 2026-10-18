// FUN_0046b1a0 @ 0046b1a0 body=[[0046b1a0, 0046b1d4] [0046b1e0, 0046b2fe] [0046b300, 0046b39a]]


bool FUN_0046b1a0(undefined4 param_1,uint *param_2)

{
  void *_Src;
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *in_EAX;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  void *_Dst;
  int *piVar9;
  int iVar10;
  int iStack_2c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  piVar4 = DAT_012588e8;
  iVar5 = (**(code **)(*DAT_012588e8 + 0x1c))();
  iStack_2c = 0;
  if (0 < iVar5) {
    do {
      iVar6 = *(int *)(piVar4[0x2b7] + iStack_2c * 4);
      if (((iVar6 != 0) && (*(int *)(iVar6 + 0x20) != 0)) &&
         (0 < (int)(*(int *)(iVar6 + 0x9dc) - *(int *)(iVar6 + 0x9d8) & 0xfffffffcU))) {
        uStack_18 = 0x2d2d2d;
        piVar9 = *(int **)(iVar6 + 0x3f8);
        iVar10 = 0;
        uStack_14 = 0;
        if (piVar9 != (int *)0x0) {
          do {
            iVar1 = *piVar9;
            piVar9 = (int *)piVar9[2];
            if (((iVar10 < *(int *)(iVar1 + 0x10)) && (*(int *)(iVar1 + 0xc) != 0)) &&
               (uStack_10 = *(undefined4 *)(iVar1 + 8),
               iVar2 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar1 + 0xc) * 4),
               0 < (int)(*(int *)(iVar2 + 0x9dc) - *(int *)(iVar2 + 0x9d8) & 0xfffffffcU))) {
              uStack_18 = *(undefined4 *)(iVar1 + 8);
              iVar10 = *(int *)(iVar1 + 0x10);
              uStack_14 = *(undefined4 *)(iVar1 + 0xc);
            }
          } while (piVar9 != (int *)0x0);
          if (0 < iVar10) {
            iVar6 = FUN_0046ac20(iVar6 + 0x1c,&uStack_18,iVar10);
            *(undefined1 *)(iVar6 + 0x84) = 1;
            FUN_0068f390();
          }
        }
      }
      iStack_2c = iStack_2c + 1;
    } while (iStack_2c < iVar5);
  }
  iStack_2c = in_EAX[1] - *in_EAX >> 2;
  if (((0xf < iStack_2c) && (param_2 != (uint *)0x0)) &&
     (iStack_2c = iStack_2c + -0x10, 0 < iStack_2c)) {
    do {
      uVar7 = *param_2 * 0x343fd + 0x269ec3;
      uVar8 = uVar7 * 0x343fd + 0x269ec3;
      *param_2 = uVar8;
      iVar5 = (int)((longlong)(ulonglong)((uVar8 >> 0x10 & 0x7fff) * (uVar7 >> 0x10 & 0x7fff)) %
                   (longlong)(in_EAX[1] - *in_EAX >> 2)) * 4;
      puVar3 = *(undefined4 **)(iVar5 + *in_EAX);
      if (puVar3 != (undefined4 *)0x0) {
        (**(code **)*puVar3)(1);
      }
      _Dst = (void *)(*in_EAX + iVar5);
      _Src = (void *)((int)_Dst + 4);
      FID_conflict__memcpy(_Dst,_Src,(in_EAX[1] - (int)_Src >> 2) * 4);
      in_EAX[1] = in_EAX[1] + -4;
      iStack_2c = iStack_2c + -1;
    } while (iStack_2c != 0);
  }
  return 0 < (int)(in_EAX[1] - *in_EAX & 0xfffffffcU);
}

