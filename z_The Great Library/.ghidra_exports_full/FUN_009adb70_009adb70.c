// FUN_009adb70 @ 009adb70 body=[[009adb70, 009adba1]]


void FUN_009adb70(void)

{
  uint uVar1;
  uint *unaff_EDI;
  
  for (uVar1 = *unaff_EDI; (*unaff_EDI <= uVar1 && (uVar1 < unaff_EDI[1])); uVar1 = uVar1 + 0x20) {
    if (*(undefined4 **)(uVar1 + 0x1c) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(uVar1 + 0x1c))(1);
    }
  }
  return;
}

