// FUN_0082e800 @ 0082e800 body=[[0082e800, 0082e935]]


int FUN_0082e800(int *param_1)

{
  undefined4 uVar1;
  char cVar2;
  int in_EAX;
  int iVar3;
  int *piVar4;
  int *in_ECX;
  undefined4 *puVar5;
  float in_XMM0_Da;
  
  if (in_EAX != 0) {
    if (in_EAX == *(int *)(in_ECX[0x37] + 0x58)) {
      if (0 < in_ECX[0x28]) {
        FUN_0082e780();
      }
    }
    else if ((in_ECX[0x28] < 1) || (iVar3 = FUN_00826f50(), *(int *)(iVar3 + 0x58) != in_EAX)) {
      cVar2 = (**(code **)(*in_ECX + 0x88))
                        (*(undefined4 *)(*(int *)(DAT_012588e8 + 0xacc) + in_EAX * 4));
      if (cVar2 == '\0') {
        return 3;
      }
      if ((*(char *)(*(int *)(in_ECX[0x37] + 0x5c) + 0x2a) != '\0') &&
         (FUN_00827410(param_1,*(undefined4 *)
                                (*(int *)(DAT_012588e8 + 0xacc) +
                                *(int *)(*(int *)(in_ECX[0x37] + 0x158) + 0x18) * 4),1),
         in_XMM0_Da < DAT_00f092fc)) {
        return 4;
      }
      iVar3 = FUN_00826c40(param_1);
      if (iVar3 == 0) {
        in_ECX[0x28] = in_EAX;
      }
      else if ((0 < in_ECX[0x6b]) &&
              (puVar5 = (undefined4 *)in_ECX[0x69], puVar5 != (undefined4 *)0x0)) {
        do {
          uVar1 = *puVar5;
          puVar5 = (undefined4 *)puVar5[2];
          (**(code **)(*param_1 + 0x1ac))(uVar1);
          piVar4 = (int *)(**(code **)(*param_1 + 0xe8))();
          (**(code **)(*piVar4 + 0x1a8))(uVar1);
        } while (puVar5 != (undefined4 *)0x0);
        return iVar3;
      }
      return iVar3;
    }
  }
  return 1;
}

