// FUN_0048ceb0 @ 0048ceb0 body=[[0048ceb0, 0048cf59]]


void FUN_0048ceb0(void)

{
  int in_EAX;
  undefined8 *puVar1;
  undefined8 *unaff_EDI;
  
  if (1 < (in_EAX - (int)unaff_EDI) / 0x14) {
    puVar1 = (undefined8 *)(in_EAX + -0x14);
    do {
      *puVar1 = *unaff_EDI;
      puVar1[1] = unaff_EDI[1];
      *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(unaff_EDI + 2);
      FUN_0048cdd0();
      puVar1 = (undefined8 *)((int)puVar1 + -0x14);
    } while (1 < ((int)puVar1 + (0x14 - (int)unaff_EDI)) / 0x14);
  }
  return;
}

