# Parneet Kaur

**Incoming M.S. Business Analytics at UC Davis (August 2026 – June 2027)**
**B.S. Computer Science from Santa Clara University (2025)**

Hi, my name is Parneet Kaur. I'm drawn to entrepreneurship as an analytical challenge, one that requires testing assumptions and using data as a medium to create value across sectors. Growing up around my father's agribusiness in India, I learned early that sustaining a business isn't just about working with numbers, it's about building long-term relationships with suppliers, customers, and employees.

I enjoy combining analytical rigor with a builder's mindset, evaluating opportunities and risks, acting decisively under uncertainty, and constructing strategies grounded in data, with a growing interest in emerging areas like generative AI.

## Table of Contents

* [Featured Projects](https://github.com/YOUR-GITHUB-USERNAME#featured-projects)
* [Technical Skills](https://github.com/YOUR-GITHUB-USERNAME#technical-skills)
* [Resume](https://github.com/YOUR-GITHUB-USERNAME#resume)

## Featured Projects

### CropWise: Data-Driven Agriculture with ML
# Tech Stack

## Core data handling
- `pandas`, `numpy` — data wrangling
- `thefuzz` (fuzzywuzzy-style) — fuzzy string matching for reconciling inconsistent country names against the UN SIDS list

## Visualization
- `matplotlib`, `seaborn` — plots (histograms, KDE, heatmaps, boxplots, residual plots)
- `IPython.display` — inline rendering of tables/outputs

## Statistics
- `scipy.stats` (`kstest`) — Kolmogorov–Smirnov normality testing
- `scipy.signal.find_peaks` — detecting bimodal peaks in temperature distribution
- `scipy.stats.mstats.winsorize` — outlier capping
- `statsmodels` — OLS regression for testing quadratic/interaction trends

## Preprocessing / feature engineering (scikit-learn)
- `KNNImputer` — imputing missing rainfall/temperature values
- `OneHotEncoder`, `ColumnTransformer`, `Pipeline` — categorical encoding
- `StandardScaler`, `PolynomialFeatures` — scaling and polynomial features
- `PCA` — dimensionality reduction for visualization in the recommender section

## Outlier detection
- `IsolationForest`, `LocalOutlierFactor` — anomaly detection tailored to different variable distributions

## Modeling
- `LinearRegression`, `Ridge`, `Lasso` — baseline linear models
- `DecisionTreeRegressor` — feature importance + non-linear baseline
- `RandomForestRegressor` — best-performing model
- `xgboost` (`XGBRegressor`, `DMatrix`, `cv`) — gradient boosting comparison
- `KMeans` + `silhouette_score` — clustering countries into regions
- `TimeSeriesSplit`, `KFold`, `train_test_split`, `GridSearchCV`, `RandomizedSearchCV`, `cross_val_score` — validation and hyperparameter tuning, with time-aware splitting to avoid leakage

## Model interpretation
- `shap` — SHAP interaction values for feature importance beyond simple decision-tree splits
- `sklearn.metrics.pairwise.cosine_similarity` — used in the content-based recommender system

## Evaluation metrics
- `mean_squared_error`, `mean_absolute_error`, `r2_score`

Crop yield prediction sits at the center of one of today's most pressing global challenges with food secruity under climate change. Food security is one of the most urgent global challenges today, compounded by environmental degradation, water scarcity, and the increasing threats posed by climate change, and crop yields are highly sensitive to fluctuations in temperature, precipitation, soil quality, and humidity which are all the exact variables this project models.

Yield prediction is an essential component of global food security because it enables proactive responses to potential yield losses caused by environmental stressors, meaning models like this one can inform decisions before shortages happen. 

Even the project's limitations prove known challenges in the field: insufficient datasets, limited climatic variation, and short yield time-series. These are the the same data-sparsity issues (missing pre-1990 records, uneven country coverage) this project had to work through.

**Overview Can Be Found in The Following Presentation Video (To Be Added)**

---

## Technical Skills

**Languages:** Python, SQL, R, HTML, CSS, JavaScript, Assembly Basics

**Analytics & ML:** Pandas, NumPy, scikit-learn, TensorFlow, PyTorch, Matplotlib, Seaborn, Statistical Modeling (Regression, A/B Testing), NLTK

**Databases:** PostgreSQL, MySQL, SQLite

**BI & Visualization:** Tableau, Power BI, Excel, QlikView

**Workflow:** Git, GitHub, VS Code

**AI & GenAI:** Prompt Engineering, LLM APIs (OpenAI, Claude, Gemini), LangChain, MLOps

## Resume

[View / Download Resume (PDF)](file:///Users/parneetkaur/Desktop/Parneet%20Kaur%20Resume.pdf)

## Connect

* [LinkedIn](https://www.linkedin.com/in/parneetk24/)
* Email: parneetk03@gmail.com
