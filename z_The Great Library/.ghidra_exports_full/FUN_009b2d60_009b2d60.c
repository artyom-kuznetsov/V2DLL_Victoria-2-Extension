// FUN_009b2d60 @ 009b2d60 body=[[009b2d60, 009b2ded]]


int FUN_009b2d60(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  int *piVar4;
  
  if (*param_1 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *param_1 + 0x1c;
  }
  for (piVar1 = (int *)in_ECX[0x18]; (piVar1 != (int *)0x0 && (*piVar1 != iVar3));
      piVar1 = (int *)piVar1[2]) {
  }
  (**(code **)(in_ECX[0x1c] + 0x40))(param_1);
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  iVar3 = in_ECX[0x1a];
  piVar4 = piVar1;
  do {
    if ((undefined4 *)*piVar4 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar4)(1);
    }
    piVar4 = (int *)piVar4[2];
  } while (piVar4 != (int *)0x0);
  FUN_009b3c30(piVar1);
  iVar2 = in_ECX[0x1a];
  (**(code **)(*in_ECX + 0x6c))();
  return iVar3 - iVar2;
}

