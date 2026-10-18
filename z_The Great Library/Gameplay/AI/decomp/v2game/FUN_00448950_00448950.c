// FUN_00448950 @ 00448950 body=[[00448950, 004489b5]]


void FUN_00448950(undefined4 *param_1,undefined4 param_2,int *param_3,int param_4)

{
  byte bVar1;
  int *piVar2;
  byte *pbVar3;
  byte *in_EAX;
  uint uVar4;
  
  do {
    if (param_4 == 0) {
      *param_1 = param_2;
      param_1[1] = param_3;
      return;
    }
    if (param_3 == (int *)0x0) {
LAB_0044899e:
      uVar4 = (uint)param_2 >> 8;
      param_2 = CONCAT31((int3)uVar4,1);
    }
    else {
      bVar1 = *in_EAX;
      if ((*(int *)param_3[9] == 0) || (piVar2 = (int *)param_3[0xd], *piVar2 < 1)) {
        uVar4 = (**(code **)(*param_3 + 0xc))(bVar1);
      }
      else {
        *piVar2 = *piVar2 + -1;
        pbVar3 = *(byte **)param_3[9];
        *(byte **)param_3[9] = pbVar3 + 1;
        *pbVar3 = bVar1;
        uVar4 = (uint)bVar1;
      }
      if (uVar4 == 0xffffffff) goto LAB_0044899e;
    }
    in_EAX = in_EAX + 1;
    param_4 = param_4 + -1;
  } while( true );
}

