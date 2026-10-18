// FUN_00a2e0c0 @ 00a2e0c0 body=[[00a2e0c0, 00a2e249]]


void FUN_00a2e0c0(int param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 *in_EAX;
  undefined4 uVar3;
  
  piVar1 = (int *)*in_EAX;
  if ((int)in_EAX[0x15] < 0) {
    (**(code **)(*piVar1 + 0x104))(piVar1,0,0);
  }
  else {
    (**(code **)(*piVar1 + 0xe4))(piVar1,0x1b,1);
    uVar2 = in_EAX[0x15];
    if ((uVar2 == 0xffffffff) || (9999 < uVar2)) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(uVar2 * 0x2c + 4 + param_1);
    }
    (**(code **)(*(int *)*in_EAX + 0x104))((int *)*in_EAX,0,uVar3);
    (**(code **)(*(int *)*in_EAX + 0x10c))((int *)*in_EAX,0,1,2);
    (**(code **)(*(int *)*in_EAX + 0x10c))((int *)*in_EAX,0,2,2);
    (**(code **)(*(int *)*in_EAX + 0x10c))((int *)*in_EAX,0,4,4);
    (**(code **)(*(int *)*in_EAX + 0x10c))((int *)*in_EAX,0,5,2);
    (**(code **)(*(int *)*in_EAX + 0x10c))((int *)*in_EAX,0,6,1);
  }
  (**(code **)(*(int *)*in_EAX + 400))((int *)*in_EAX,0,in_EAX[1],0,in_EAX[2]);
  (**(code **)(*(int *)*in_EAX + 0x164))((int *)*in_EAX,in_EAX[4]);
  (**(code **)(*(int *)*in_EAX + 0x144))((int *)*in_EAX,4,0,(uint)in_EAX[3] / 3);
  (**(code **)(*(int *)*in_EAX + 0x104))((int *)*in_EAX,0,0);
  (**(code **)(*(int *)*in_EAX + 0x10c))((int *)*in_EAX,0,1,4);
  (**(code **)(*(int *)*in_EAX + 0x10c))((int *)*in_EAX,0,2,2);
  (**(code **)(*(int *)*in_EAX + 0x10c))((int *)*in_EAX,0,3,1);
  (**(code **)(*(int *)*in_EAX + 0x10c))((int *)*in_EAX,1,1,1);
  (**(code **)(*(int *)*in_EAX + 0x10c))((int *)*in_EAX,1,4,1);
  (**(code **)(*(int *)*in_EAX + 0xe4))((int *)*in_EAX,0x1b,0);
  return;
}

