// FUN_00448540 @ 00448540 body=[[00448540, 0044859f]]


void FUN_00448540(undefined4 param_1,int *param_2,byte param_3)

{
  int *piVar1;
  byte *pbVar2;
  int in_EAX;
  uint uVar3;
  undefined4 *unaff_EDI;
  
  do {
    if (in_EAX == 0) {
      *unaff_EDI = param_1;
      unaff_EDI[1] = param_2;
      return;
    }
    if (param_2 == (int *)0x0) {
LAB_0044858b:
      uVar3 = (uint)param_1 >> 8;
      param_1 = CONCAT31((int3)uVar3,1);
    }
    else {
      if ((*(int *)param_2[9] == 0) || (piVar1 = (int *)param_2[0xd], *piVar1 < 1)) {
        uVar3 = (**(code **)(*param_2 + 0xc))(param_3);
      }
      else {
        *piVar1 = *piVar1 + -1;
        pbVar2 = *(byte **)param_2[9];
        *(byte **)param_2[9] = pbVar2 + 1;
        *pbVar2 = param_3;
        uVar3 = (uint)param_3;
      }
      if (uVar3 == 0xffffffff) goto LAB_0044858b;
    }
    in_EAX = in_EAX + -1;
  } while( true );
}

