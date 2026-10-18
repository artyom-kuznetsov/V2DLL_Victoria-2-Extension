// FUN_00a8a820 @ 00a8a820 body=[[00a8a820, 00a8a908] [00a8a910, 00a8a99c]]


int * FUN_00a8a820(int *param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  void *_Dst;
  int iVar4;
  size_t _Size;
  int *piVar5;
  
  piVar3 = (int *)(*(code *)PTR__malloc_00f071f8)(0x17d0);
  if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    _abort();
  }
  _Size = param_2 * 0xe8;
  _Dst = (void *)(*(code *)PTR__malloc_00f071f8)(_Size);
  if (_Dst == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _abort();
  }
  piVar3[8] = (int)_Dst;
  _memset(_Dst,0,_Size);
  iVar4 = FUN_00a8b1f0(param_1);
  *piVar3 = iVar4;
  if (iVar4 == -1) {
    (*(code *)PTR__free_00f071fc)(piVar3[8]);
    (*(code *)PTR__free_00f071fc)(piVar3);
    return (int *)0x0;
  }
  if (param_1 != (int *)0x0) {
    piVar3[1] = *param_1;
    piVar3[2] = param_1[1];
  }
  piVar3[3] = param_3;
  piVar3[4] = param_4;
  uVar2 = piVar3[8];
  piVar3[5] = 0;
  piVar3[7] = 0;
  piVar3[0x16c] = 0;
  piVar3[0x1ef] = 0;
  piVar3[0x1f0] = 0;
  piVar3[0x5f2] = 0;
  piVar3[9] = param_2;
  piVar3[6] = 0x578;
  piVar3[10] = uVar2;
  *(undefined2 *)(piVar3 + 0x1f1) = 0;
  if (uVar2 < uVar2 + _Size) {
    piVar5 = (int *)(uVar2 + 0xb0);
    do {
      piVar5[-0x2c] = (int)piVar3;
      iVar4 = (int)piVar5 + (-0xb0 - piVar3[8]);
      piVar5[-0x27] = 0;
      *(short *)((int)piVar5 + -0xaa) =
           ((short)(iVar4 / 0xe8) + (short)(iVar4 >> 0x1f)) -
           (short)((longlong)iVar4 * 0x8d3dcb09 >> 0x3f);
      piVar1 = piVar5 + -3;
      *piVar1 = (int)piVar1;
      piVar5[-2] = (int)piVar1;
      piVar1 = piVar5 + -1;
      *piVar1 = (int)piVar1;
      *piVar5 = (int)piVar1;
      piVar1 = piVar5 + 1;
      *piVar1 = (int)piVar1;
      piVar5[2] = (int)piVar1;
      piVar1 = piVar5 + 3;
      *piVar1 = (int)piVar1;
      piVar5[4] = (int)piVar1;
      piVar1 = piVar5 + 5;
      *piVar1 = (int)piVar1;
      piVar5[6] = (int)piVar1;
      FUN_00a8a360();
      piVar1 = piVar5 + 0xe;
      piVar5 = piVar5 + 0x3a;
    } while (piVar1 < (int *)(piVar3[9] * 0xe8 + piVar3[8]));
  }
  return piVar3;
}

