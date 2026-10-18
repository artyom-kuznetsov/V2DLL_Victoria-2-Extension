// FUN_009eb690 @ 009eb690 body=[[009eb690, 009eb7be]]


int * FUN_009eb690(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  *(undefined8 *)(param_1 + 0x3e) = *(undefined8 *)(param_2 + 0xf8);
  param_1[0x40] = *(int *)(param_2 + 0x100);
  *(undefined8 *)(param_1 + 0x41) = *(undefined8 *)(param_2 + 0x104);
  param_1[0x43] = *(int *)(param_2 + 0x10c);
  *(undefined8 *)(param_1 + 0x44) = *(undefined8 *)(param_2 + 0x110);
  param_1[0x46] = *(int *)(param_2 + 0x118);
  *(undefined8 *)(param_1 + 0x47) = *(undefined8 *)(param_2 + 0x11c);
  param_1[0x49] = *(int *)(param_2 + 0x124);
  *(undefined8 *)(param_1 + 0x4a) = *(undefined8 *)(param_2 + 0x128);
  param_1[0x4c] = *(int *)(param_2 + 0x130);
  param_1[0x4d] = *(int *)(param_2 + 0x134);
  param_1[0x4e] = *(int *)(param_2 + 0x138);
  param_1[0x4f] = *(int *)(param_2 + 0x13c);
  param_1[0x50] = *(int *)(param_2 + 0x140);
  *(undefined1 *)(param_1 + 0x51) = *(undefined1 *)(param_2 + 0x144);
  iVar2 = *param_1;
  piVar3 = (int *)(param_2 + 0x148);
  piVar4 = param_1 + 0x52;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar4 = *piVar3;
    piVar3 = piVar3 + 1;
    piVar4 = piVar4 + 1;
  }
  piVar3 = (int *)(param_2 + 0x1c8);
  piVar4 = param_1 + 0x72;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar4 = *piVar3;
    piVar3 = piVar3 + 1;
    piVar4 = piVar4 + 1;
  }
  (**(code **)(iVar2 + 0xa4))(param_2 + 0x54);
  piVar3 = (int *)(param_2 + 0x94);
  piVar4 = param_1 + 0x25;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar4 = *piVar3;
    piVar3 = piVar3 + 1;
    piVar4 = piVar4 + 1;
  }
  FUN_009ebf10(param_1);
  return param_1;
}

