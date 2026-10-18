// FUN_009af7e0 @ 009af7e0 body=[[009af7e0, 009af8ee]]


void FUN_009af7e0(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  if ((iVar1 == 4) || (param_2 != 4)) {
    if ((iVar1 == 0xb) || (param_2 != 0xb)) {
      if ((iVar1 == 6) || (param_2 != 6)) {
        if ((iVar1 != 0xd) && (param_2 == 0xd)) {
          *(undefined4 *)(param_1 + 0x2c) = 0xd;
          FUN_009ae5d0();
          *(undefined4 *)(param_1 + 0x2c) = 0xd;
          return;
        }
        if (param_2 == 8) {
          puVar2 = *(undefined4 **)(param_1 + 4);
          *(undefined4 *)(param_1 + 0x2c) = 8;
          for (; puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)puVar2[2]) {
            (**(code **)(*(int *)*puVar2 + 4))(9);
          }
        }
      }
      else {
        puVar2 = *(undefined4 **)(param_1 + 4);
        *(undefined4 *)(param_1 + 0x2c) = 6;
        if (puVar2 != (undefined4 *)0x0) {
          do {
            (**(code **)(*(int *)*puVar2 + 4))(8);
            puVar2 = (undefined4 *)puVar2[2];
          } while (puVar2 != (undefined4 *)0x0);
          *(undefined4 *)(param_1 + 0x2c) = 6;
          return;
        }
      }
    }
    else {
      puVar2 = *(undefined4 **)(param_1 + 4);
      *(undefined4 *)(param_1 + 0x2c) = 0xb;
      if (puVar2 != (undefined4 *)0x0) {
        do {
          (**(code **)(*(int *)*puVar2 + 4))(0);
          puVar2 = (undefined4 *)puVar2[2];
        } while (puVar2 != (undefined4 *)0x0);
        *(undefined4 *)(param_1 + 0x2c) = 0xb;
        return;
      }
    }
  }
  else {
    puVar2 = *(undefined4 **)(param_1 + 4);
    *(undefined4 *)(param_1 + 0x2c) = 4;
    if (puVar2 != (undefined4 *)0x0) {
      do {
        (**(code **)(*(int *)*puVar2 + 4))(0);
        puVar2 = (undefined4 *)puVar2[2];
      } while (puVar2 != (undefined4 *)0x0);
      *(undefined4 *)(param_1 + 0x2c) = 4;
      return;
    }
  }
  *(int *)(param_1 + 0x2c) = param_2;
  return;
}

