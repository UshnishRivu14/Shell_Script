#include<stdio.h>

int main(){

int quantum,i,n,time=0,completed = 0;
\n
printf("Enter the number of processes: ");
scanf("%d",&n);

int pid[n], burst_time[n], waiting_time[n], arrival_time[n], turnaround_time[n], remaining time[n];

for(i=0;i<n;i++){
printf("enter the burst time and arrival time for process P%d",i+1);
scanf("%d %d",&burst_time[n],&arrival_time[n]);
remaining_time[i] = burst_time[i];
}

printf("Enter the time quantum: ");
scanf("%d",&quantum);

while(complete<n){
     for(i=0;i<n;i++){
       if(remaining_time[i]>o){
         if(remaining_time[i]<= quantum){
           time += remaining_time[i];
           turnaround_time = time-arrival_time[i];
           remaining_time[i]=0;
           completed++;
         }
         else{
            time += quatnum
            remaining_time[i] -= quantum; 
         }
      }
   }
}



for(i=0;i<n;i++){
waiting_time[n] = turnaround_time[n] - burst_time[n];
}

printf("\nProcess\t\tBurst Time\tArrival Time\tWaiting Time\tTurnAround Time\n");
for(i=0;i<n;i++){
printf("P%d\t\t%d\t\t%d\t\t%d\t\t%d\n",i+1,burst_time[i],arrival_time[i],waiting_time[i],turnaround_time[i]);
}

return 0;
}
