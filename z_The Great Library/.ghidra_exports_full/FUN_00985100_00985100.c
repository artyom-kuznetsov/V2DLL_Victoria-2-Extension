// FUN_00985100 @ 00985100 body=[[00985100, 0098516a]]


undefined4 * FUN_00985100(int param_1,undefined4 *param_2)

{
  int iVar1;
  int in_EAX;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (param_1 != in_EAX) {
    puVar2 = (undefined8 *)(in_EAX + 0x30);
    puVar3 = (undefined8 *)(param_2 + 0xc);
    do {
      param_2 = param_2 + -0x11;
      *param_2 = *(undefined4 *)((int)puVar2 + -0x74);
      *(undefined4 *)(puVar3 + -0xe) = *(undefined4 *)(puVar2 + -0xe);
      *(undefined4 *)((int)puVar3 + -0x6c) = *(undefined4 *)((int)puVar2 + -0x6c);
      FUN_00408ed0(puVar2 + -0xd,0,0xffffffff);
      *(undefined4 *)(puVar3 + -9) = *(undefined4 *)(puVar2 + -9);
      *(undefined8 *)((int)puVar3 + -0x44) = *(undefined8 *)((int)puVar2 + -0x44);
      *(undefined8 *)((int)puVar3 + -0x3c) = *(undefined8 *)((int)puVar2 + -0x3c);
      iVar1 = (int)puVar2 + -0x74;
      *(undefined1 *)((int)puVar3 + -0x34) = *(undefined1 *)((int)puVar2 + -0x34);
      puVar2 = (undefined8 *)((int)puVar2 + -0x44);
      puVar3 = (undefined8 *)((int)puVar3 + -0x44);
    } while (iVar1 != param_1);
  }
  return param_2;
}

