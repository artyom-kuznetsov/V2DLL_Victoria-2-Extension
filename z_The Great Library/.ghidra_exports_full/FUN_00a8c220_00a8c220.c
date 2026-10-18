// FUN_00a8c220 @ 00a8c220 body=[[00a8c220, 00a8c34e]]


undefined4 FUN_00a8c220(void)

{
  int *piVar1;
  ushort uVar2;
  byte bVar3;
  char cVar4;
  int in_EAX;
  undefined4 uStack_8;
  
  piVar1 = *(int **)(in_EAX + 0x20);
  uStack_8 = 0;
  while (piVar1[2] != 1) {
    if (piVar1[2] == 2) {
LAB_00a8c2c1:
      bVar3 = FUN_00a8bfe0();
      uStack_8 = CONCAT13(uStack_8._3_1_ | bVar3,(undefined3)uStack_8);
      if ((piVar1[1] == 2) || (piVar1[3] != 0)) {
        if (piVar1[0x11] < piVar1[0x12]) {
          uVar2 = uStack_8._2_2_;
          if (*(int *)(*piVar1 + 4) == 0) {
LAB_00a8c333:
            uStack_8._2_2_ = uVar2;
            if ((uStack_8._3_1_ == '\0') && (uStack_8._2_1_ == '\0')) {
              return 0;
            }
            return 1;
          }
        }
        else {
          FUN_00a8fa30(0);
          piVar1[2] = 1;
        }
      }
      else {
        if ((uint)piVar1[0xd] < 0x100) {
          FUN_00a8bef0();
        }
        piVar1[0xd] = 0x100;
        piVar1[0xe] = 0;
        FUN_00a8fa30(piVar1[1] == 4);
        piVar1[2] = 1;
      }
    }
  }
  bVar3 = FUN_00a8c1c0();
  uVar2 = CONCAT11(uStack_8._3_1_,uStack_8._2_1_ | bVar3);
  uStack_8 = (uint)uVar2 << 0x10;
  if ((piVar1[0x14] < piVar1[0x13]) ||
     (((piVar1[1] == 4 && (piVar1[3] == 0)) && (cVar4 = FUN_00a8bd70(), cVar4 != '\0'))))
  goto LAB_00a8c333;
  piVar1[0x11] = 0;
  piVar1[0x13] = 0;
  piVar1[0x14] = 0;
  piVar1[0x98] = -1;
  _memset(piVar1 + 0x16,0,0x100);
  piVar1[0x9b] = piVar1[0x9b] + 1;
  piVar1[2] = 2;
  if (((piVar1[1] == 3) && (piVar1[3] == 0)) && (cVar4 = FUN_00a8bd70(), cVar4 != '\0'))
  goto LAB_00a8c333;
  goto LAB_00a8c2c1;
}

