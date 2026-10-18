// FUN_0042b410 @ 0042b410 body=[[0042b410, 0042b43f]]


void FUN_0042b410(void)

{
  int unaff_ESI;
  
  if (*(undefined4 **)(unaff_ESI + 8) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(unaff_ESI + 8))(1);
    *(undefined4 *)(unaff_ESI + 8) = 0;
    *(undefined4 *)(unaff_ESI + 0xc) = DAT_01259abc;
    return;
  }
  *(undefined4 *)(unaff_ESI + 8) = 0;
  *(undefined4 *)(unaff_ESI + 0xc) = DAT_01259abc;
  return;
}

