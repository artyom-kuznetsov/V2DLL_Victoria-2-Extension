// FUN_009ed370 @ 009ed370 body=[[009ed370, 009ed4c9]]


void FUN_009ed370(undefined4 param_1,undefined4 param_2,undefined4 param_3,float param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int *unaff_ESI;
  float fVar4;
  
  iVar1 = (**(code **)(*(int *)unaff_ESI[0x4f] + 0x88))();
  if (2 < iVar1) {
    if ((unaff_ESI[0x55] != 0) || (param_4 - (float)unaff_ESI[0x56] <= 15000.0)) {
      if ((param_4 - (float)unaff_ESI[0x56] <= 1000.0) || (unaff_ESI[0x55] == 0)) goto LAB_009ed44e;
      unaff_ESI[0x55] = 0;
      fVar4 = param_4;
      uVar2 = FUN_009b7610();
      fVar4 = (float)(uVar2 & 0x7fffffff) * 4.656613e-10 * 10000.0 + fVar4;
    }
    else {
      iVar1 = (**(code **)(*(int *)unaff_ESI[0x4f] + 0x88))();
      unaff_ESI[0x55] = (int)param_4 % (iVar1 + -1) + 1;
      fVar4 = param_4;
    }
    unaff_ESI[0x56] = (int)fVar4;
  }
LAB_009ed44e:
  iVar1 = *(int *)unaff_ESI[0x4f];
  uVar3 = (**(code **)(*unaff_ESI + 0x114))(unaff_ESI[0x2cb]);
  uVar3 = (**(code **)(*unaff_ESI + 100))
                    (*(undefined1 *)((int)unaff_ESI + 0x14e),unaff_ESI[0x2ca],uVar3);
  (**(code **)(iVar1 + 0x7c))
            (unaff_ESI[0x55],param_1,param_2,param_3,param_4,(short)unaff_ESI[0x53],0,uVar3);
  return;
}

