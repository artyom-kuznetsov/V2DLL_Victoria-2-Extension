// FUN_00addc60 @ 00addc60 body=[[00addc60, 00addd5a]]


void FUN_00addc60(uint param_1,uint param_2,char param_3,char param_4)

{
  void *_Dst;
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *in_ECX;
  uint uVar5;
  uint uVar6;
  
  uVar6 = param_1;
  if (param_2 < param_1) {
    param_1 = param_2;
    param_2 = uVar6;
  }
  uVar6 = in_ECX[0xd];
  uVar5 = 0;
  iVar3 = (param_2 - param_1) + 1;
  in_ECX[6] = in_ECX[6] - iVar3;
  iVar2 = iVar3;
  if (uVar6 != 0) {
    do {
      (**(code **)(**(int **)(in_ECX[0xc] + uVar5 * 4) + 0x20))(param_1,param_2);
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar6);
  }
  do {
    if (iVar2 == 0) {
      if ((param_3 != '\0') && (uVar6 = 0, in_ECX[7] != 0)) {
        do {
          piVar1 = (int *)(in_ECX[4] + uVar6 * 4);
          if (param_1 < *(uint *)(in_ECX[4] + uVar6 * 4)) {
            *piVar1 = *piVar1 - iVar3;
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < (uint)in_ECX[7]);
      }
      return;
    }
    uVar6 = 0;
    if (in_ECX[1] != 0) {
      do {
        iVar4 = *(int *)(*in_ECX + uVar6 * 4);
        uVar5 = *(uint *)(iVar4 + 0x10);
        if (param_1 < uVar5) {
LAB_00addce4:
          *(uint *)(iVar4 + 0x10) = uVar5 - 1;
        }
        else {
          if (param_1 < *(int *)(iVar4 + 0x18) + uVar5) {
            *(int *)(iVar4 + 0x18) = *(int *)(iVar4 + 0x18) + -1;
          }
          if (param_1 < uVar5) goto LAB_00addce4;
        }
        if ((*(int *)(iVar4 + 0x18) == 0) && (param_4 != '\0')) {
          if ((1 < (uint)in_ECX[1]) && (iVar4 = (in_ECX[1] - uVar6) + -1, iVar4 != 0)) {
            _Dst = (void *)(*in_ECX + uVar6 * 4);
            FID_conflict__memcpy(_Dst,(void *)((int)_Dst + 4),iVar4 * 4);
          }
          in_ECX[1] = in_ECX[1] + -1;
        }
        else {
          uVar6 = uVar6 + 1;
        }
      } while (uVar6 < (uint)in_ECX[1]);
    }
    iVar2 = iVar2 + -1;
  } while( true );
}

