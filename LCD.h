// Lcd pinout settings
sbit LCD_RS at PORTD5_bit;
sbit LCD_EN at PORTD3_bit;
sbit LCD_D7 at PORTC7_bit;
sbit LCD_D6 at PORTC6_bit;
sbit LCD_D5 at PORTC5_bit;
sbit LCD_D4 at PORTC4_bit;
sbit LCD_D3 at PORTC3_bit;
sbit LCD_D2 at PORTC2_bit;
sbit LCD_D1 at PORTC1_bit;
sbit LCD_D0 at PORTC0_bit;
// Pin direction
sbit LCD_RS_Direction at DDD5_bit;
sbit LCD_EN_Direction at DDD3_bit;
sbit LCD_D7_Direction at DDC7_bit;
sbit LCD_D6_Direction at DDC6_bit;
sbit LCD_D5_Direction at DDC5_bit;
sbit LCD_D4_Direction at DDC4_bit;
sbit LCD_D3_Direction at DDC3_bit;
sbit LCD_D2_Direction at DDC2_bit;
sbit LCD_D1_Direction at DDC1_bit;
sbit LCD_D0_Direction at DDC0_bit;

void main()
{
 Lcd_Init();                          // Initialize LCD
 Lcd_Out(1, 3, "Hello!");             // write text in first row third column
 Lcd_Cmd(_LCD_CLEAR);                 // Clear display
 Lcd_Cmd(_LCD_CURSOR_OFF);            // Cursor off
 Lcd_Out(1,1,"mode 1:MOTOR ON");      // Write text in first row
 Lcd_Out(2,1,"mode 2:MOTOR OFF");     // Write text in second row
 Delay_ms(2000);
 Lcd_Cmd(_LCD_CLEAR);                 // Clear display
