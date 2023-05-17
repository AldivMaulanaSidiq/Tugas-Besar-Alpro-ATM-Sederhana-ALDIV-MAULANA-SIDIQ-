#include <stdio.h>
#include <stdlib.h>

void banner(){
    int pilih; 
	printf("+====================================+\n");
    printf("|============  BANK AMS  ============|\n");
    printf("+====================================+\n\n");
}
int main(){

	int saldo = 1000000, pin = 123456, rekening, login_attempt = 0, keluar, transfer, rekeningTuju, setor, nominal, pilih, menu_topup, id_dana, nominal_dana, id_shopee, nominal_shopee, id_ovo, nominal_ovo, input_pin;
 
	while (login_attempt < 3) {
        logout:
      	system("cls");
      	banner();
      	printf("           Selamat Datang\n");
      	printf("      Silakan Masukan PIN Anda\n\n");
      	printf("      Masukan PIN: ");
		scanf("%d", &input_pin);

		if (input_pin == pin) {
            printf("\nLogin Berhasil!\n");

			menu:
    		menu_utama:
        	system("cls");
        	banner();
        	printf("Menu Transaksi :\n");
        	printf("  1. Tarik Tunai\n");
        	printf("  2. Transfer\n");
        	printf("  3. Setor Tunai\n");
        	printf("  4. Cek Saldo\n");
        	printf("  5. Top Up\n");
        	printf("  6. Logout\n");
        	printf("  7. Exited\n");
        	printf("Silakan pilih menu (Angka) : ");
        	scanf("%i", &pilih);
        	
        	
        	switch (pilih){
        		case 1:
            		system("cls");
            		banner();
        		case1:
        		    printf("      Masukan PIN: ");
		            scanf("%d", &input_pin);
		            system("cls");
            		banner();
            		printf("Pilih nominal yang ingin anda ambil,\n");
            		printf("  1. 50000\n");
            		printf("  2. 100000\n");
            		printf("  3. 250000\n");
           			printf("  4. Nominal Lain\n");
            		printf("Silaka  pilih (1-4): ");
            		scanf("%i", &nominal);
            		if (nominal == 1)
                		keluar = 50000;
            		else if (nominal == 2)
                		keluar = 100000;
            		else if (nominal == 3)
                		keluar = 150000;
            		else if (nominal == 4){
                		system("cls");
                		banner();
            		inputKeluar:
                		printf("Masukan nominal yang ingin anda ambil (kelipatan 50000),\n");
                			scanf("%i", &keluar);
                		if (keluar % 50000 != 0){
                    		system("cls");
                    		banner();
                    		printf("Nominal yang anda masukan bukan kelipatan 50000\n\n");
                    		goto inputKeluar;
                		}
            		}else{
                		system("cls");
                		banner();
                		printf("Pilihan salah\nSilahkan Pilih kembali\n\n");
                		goto case1;
            		}
            		if (keluar > saldo){
                		system("cls");
                		banner();
                		printf("Transaksi Gagal\n");
                		printf("Saldo anda tidak mencukupi\n\n");
                		goto konfirmasi;
					}else{
                		system("cls");
                		banner();
                		printf("        Transaksi Berhasil!\n");
                		saldo = saldo - keluar;
                		printf("          Sisa saldo anda,\n              %d\n\n", saldo);
                		goto konfirmasi;
					}
            	break;
            	
        		case 2: //transfer
        		    system("cls");
            		banner();
        		    printf("      Masukan PIN: ");
		            scanf("%d", &input_pin);
            		system("cls");
            		banner();
            		printf("Masukan nomor rekening yang anda tuju,\n");
            		scanf("%i", &rekeningTuju);
            		printf("Masukan nominal yang ingin anda transfer,\n");
            		scanf("%i", &transfer);
            		if (transfer > saldo){
                		system("cls");
                		banner();
                		printf("Transaksi Gagal\n");
                		printf("Saldo anda tidak mencukupi\n\n");
                		goto konfirmasi;
            		}else{
                		system("cls");
                		banner();
                		printf("Transaksi Berhasil!\n");
                		printf("Transfer Rp.%i\n",transfer);
                		printf("\nDari Tabungan\n");
                		printf("Rek. No. : xxxxxxxxx6100\n\n");
                		printf("Ke       : Alien Gustian\n");
                		printf("Rek. No. : %i",rekeningTuju);
                		
                		saldo = saldo - transfer;
                		printf("\n\nSisa saldo anda,\n%d\n\n", saldo);
                		goto konfirmasi;
            		}
            		break;
            		
        		case 3://setor tunai
        		    system("cls");
            		banner();
        		    printf("      Masukan PIN: ");
		            scanf("%d", &input_pin);
            		system("cls");
            		banner();
            		printf("Uang yang anda masukan harus rapih,\nDan merupakan kelipatan 50000\n\n");
        		inputSetor:
            		printf("Masukan nominal yang ingin anda setor,\n");
            		scanf("%i", &setor);
            		if (setor % 50000 != 0){
                		system("cls");
                		banner();
                		printf("Nominal yang anda masukan bukan kelipatan 50000\n\n");
                		goto inputSetor;
            		}
            		system("cls");
            		banner();
            		printf("        Transaksi Berhasil!\n");
            		saldo = saldo + setor;
            		printf("      Total saldo anda menjadi,\n              %d\n\n", saldo);
            		goto konfirmasi;
            		break;
            		
        		case 4://cek saldo
        		    system("cls");
            		banner();
        		    printf("      Masukan PIN: ");
		            scanf("%d", &input_pin);
            		system("cls");
            		banner();
            		printf("         Saldo anda adalah,\n              %d\n\n", saldo);
            		goto konfirmasi;
            		break;
            
            	case 5 :
					system("cls");
					banner();
					printf("Top Up\n");
					printf("   1. DANA\n");
					printf("   2. Shopee\n");
					printf("   3. OVO\n");
					printf("   4. PLN\n");
					printf("   5. Kembali Ke Menu Utama\n");
					printf("Masukan Pilihan Anda (Angka) :");
					scanf("%i", &menu_topup);
					
					switch(menu_topup){
					
					case 1 : //DANA
					    system("cls");
            	    	banner();
        		        printf("      Masukan PIN: ");
		                scanf("%d", &input_pin);
						system("cls");
						banner();
            			printf("Masukan nomor DANA : \n");
            			scanf("%i", &id_dana);
            			printf("Masukan nominal : \n");
            			scanf("%i", &nominal_dana);
            	    	if (nominal_dana > saldo){
            	    	    system("cls");
						    banner();
                    		printf("Transaksi DANA gagal\n");
                    		printf("Saldo anda tidak mencukupi\n\n");
                    	}else{
                    		system("cls");
						    banner();
                    		printf("Transaksi DANA Berhasil!\n\n");
                    		printf("DANA : BxxxxLxxxx\n");
                    		printf("ID DANA : %i\n",id_dana);
                    		printf(" Dengan Nominal : %i\n\n",nominal_dana);
                    		saldo = saldo - nominal_dana;
                    		printf("Sisa saldo anda,\n%i\n\n", saldo);}
                    		goto konfirmasi;
			       		break;
			       
			    	case 2 : //Shopee
			    	    system("cls");
            	    	banner();
        		        printf("      Masukan PIN: ");
		                scanf("%d", &input_pin);
			    		system("cls");
			    		banner();
            			printf("Masukan nomor Shopee : \n");
            			scanf("%i", &id_shopee);
            			printf("Masukan nominal : \n");
            			scanf("%i", &nominal_shopee);
            			if (nominal_shopee > saldo){
            				system("cls");
						    banner();
							printf("Transaksi Shopee gagal\n");
							printf("Saldo anda tidak mencukupi\n\n");
						}else{
							system("cls");
						    banner();
							printf("Transaksi Shopee Berhasil!\n\n");
							printf("Shopee : CxxxxAxxxx\n");
                    		printf("ID Shopee : %i\n",id_shopee);
                    		printf(" Dengan Nominal : %i\n\n",nominal_shopee);
							saldo = saldo - nominal_shopee;
							printf("Sisa saldo anda,\n%i\n\n", saldo);}
							goto konfirmasi;
						break;
					
					case 3 : //OVO
					    system("cls");
            	    	banner();
        		        printf("      Masukan PIN: ");
		                scanf("%d", &input_pin);
						system("cls");
						banner();
            			printf("Masukan nomor OVO : \n");
            			scanf("%i", &id_ovo);
            			printf("Masukan nominal : \n");
            			scanf("%i", &nominal_ovo);
            				if (nominal_ovo > saldo){
            								system("cls");
						    banner();
                				printf("Transaksi OVO gagal\n");
                				printf("Saldo anda tidak mencukupi\n\n");
            				}else{
            					system("cls");
						    banner();
								printf("Transaksi OVO Berhasil!\n\n");
								printf("OVO : KxxxxxPxxx\n");
                    		printf("ID OVO : %i\n",id_ovo);
                    		printf(" Dengan Nominal : %i\n\n",nominal_ovo);
							saldo = saldo - nominal_shopee;
								saldo = saldo - nominal_ovo;
								printf("Sisa saldo anda,\n%i\n\n", saldo);}
								goto konfirmasi;
            				break;
            	
            		case 4 :
            			goto menu_utama;
            		break;
            	
            		default :
					printf("   Pilihan Menu Tidak Valid");
					break;
            		}
            	
        		case 6 : // Logout
        			goto logout;
        		break;
        		
        		case 7 : //Exited
        			goto end;
        		break;
        
        		default:
            		system("cls");
            		printf("Pilihan Menu Salah,\nSilahkan Pilih Kembali\n\n");
            		goto menu;
            	break;
			}

 		}else{
            // Jika PIN salah, tampilkan pesan error dan tingkatkan jumlah percobaan
            printf("\nPIN tidak valid. Silakan coba lagi..\n");
            system("cls");
            login_attempt++;
 		}
	}
	if (login_attempt == 3) {
	       system("cls");
		banner();
    	printf("Anda Salah Memasukan Pin Lebih dari 3 Kali, \n       Kartu Anda Terblokir."); return 0;
	}
konfirmasi:
    printf("Apakah anda ingin melakukan transaksi lain ?\n");
    printf("  1. Ya\n");
    printf("  2. Tidak\n");
    printf("Silakan pilih (1 atau 2) : ");
    scanf("%i", &pilih);
    if (pilih == 1){
        goto menu;
	}
    else if (pilih == 2){
		goto end;
	}else{
        system("cls");
        banner();
        printf("Pilihan Salah\nSilahkan pilih kembali\n\n");
        goto konfirmasi;
  
    }
end:
    system("cls");
    banner();
    printf("\n+====================================+\n");
    printf("|  Terimakasih Telah Bertransaksi    |\n");
    printf("|           Di Bank AMS              |\n");
    printf("|          DI SUSUN OLEH             |\n");
    printf("|   NAMA  : ALDIV MAULANA SIDIQ      |\n");
    printf("|   NIM   : 12150511767              |\n");
    printf("|   KELAS : 4-A                      |\n"); 
	printf("+====================================+");return 0;
}
