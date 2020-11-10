 
    int n, m; 
    scanf("%d %d",&n,&m);
    char *topic[n];
    for(int topic_i = 0; topic_i < n; topic_i++){
       topic[topic_i] = (char *)malloc(1024 * sizeof(char));
       scanf("%s",topic[topic_i]);
    }
    int known, max_known = 0, know_all = 0;
    for(int i = 0; i < n-1; i++) {
        for(int j = i+1; j < n; j++) {
            known = 0;
            for(int k = 0; k < m; k++) {
                if(topic[i][k] == '1' || topic[j][k] == '1')
                    known++;
                if(max_known < known) {
                    max_known = known;
                    know_all = 0;
                }
                if(known == max_known)
                    know_all++;
            }
        }
    }
    printf("%d\n%d\n", max_known, know_all);
    return 0;
}	
